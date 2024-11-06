import sqlite3

# Connect to the SQLite database (ensure the path to your database is correct)
connection = sqlite3.connect('database.db')
cursor = connection.cursor()

# SQL command to create the student_selections table
create_table_query = '''
CREATE TABLE IF NOT EXISTS student_selections (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    roll_number TEXT NOT NULL,
    subject_id INTEGER NOT NULL,
    FOREIGN KEY (subject_id) REFERENCES subjects (id)
);
'''

# Execute the query
cursor.execute(create_table_query)

# Commit the changes and close the connection
connection.commit()
connection.close()

print("Table created successfully.")
