from flask import Flask, render_template, request, redirect, url_for
import sqlite3

app = Flask(__name__)

# Database connection function
def get_db_connection():
    conn = sqlite3.connect('database.db')
    conn.row_factory = sqlite3.Row
    return conn

# Homepage route
@app.route('/')
def index():
    return render_template('index.html')

# Student dashboard route
@app.route('/student-dashboard', methods=['GET', 'POST'])
def student_dashboard():
    conn = get_db_connection()  # Open the database connection
    subjects = conn.execute('SELECT * FROM subjects').fetchall()  # Fetch all subjects

    if request.method == 'POST':
        roll_number = request.form['roll_number']
        selected_subjects = request.form.getlist('subjects')

        # Insert the selected subjects into the student_selections table
        for subject_id in selected_subjects:
            conn.execute(
                'INSERT INTO student_selections (roll_number, subject_id) VALUES (?, ?)',
                (roll_number, subject_id)
            )
        conn.commit()

        # Fetch the selected subjects for display
        selected_subjects_details = conn.execute(
            'SELECT name FROM subjects WHERE id IN ({})'.format(','.join('?' * len(selected_subjects))),
            selected_subjects
        ).fetchall()

        conn.close()  # Close the connection after all operations are complete

        # Render the success template with the selected subjects
        return render_template('success.html', roll_number=roll_number, selected_subjects=selected_subjects_details)

    conn.close()  # Close the connection if it's a GET request
    return render_template('student_dashboard.html', subjects=subjects)


# Admin dashboard route
@app.route('/admin-dashboard', methods=['GET', 'POST'])
def admin_dashboard():
    conn = get_db_connection()
    subjects = conn.execute('SELECT * FROM subjects').fetchall()

    # Handle the addition of a new subject
    if request.method == 'POST' and 'subject_name' in request.form:
        subject_name = request.form['subject_name']
        conn.execute('INSERT INTO subjects (name) VALUES (?)', (subject_name,))
        conn.commit()
        return redirect(url_for('admin_dashboard'))

    # Handle the deletion of a subject
    if request.method == 'POST' and 'delete_subject_id' in request.form:
        subject_id = request.form['delete_subject_id']
        conn.execute('DELETE FROM subjects WHERE id = ?', (subject_id,))
        conn.commit()
        return redirect(url_for('admin_dashboard'))

    conn.close()
    return render_template('admin_dashboard.html', subjects=subjects)


# Success page route
@app.route('/success')
def success():
    return "Subjects successfully selected!"

if __name__ == '__main__':
    app.run(debug=True)
