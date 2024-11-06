import sqlite3

# Connect to the database
connection = sqlite3.connect('database.db')
cursor = connection.cursor()

# List of subjects for CSE 3rd-year students
subjects = [
    ('Data Structures and Algorithms',),
    ('Operating Systems',),
    ('Database Management Systems',),
    ('Computer Networks',),
    ('Software Engineering',),
    ('Theory of Computation',),
    ('Artificial Intelligence',),
    ('Compiler Design',),
    ('Machine Learning',),
    ('cloud computing',),
    ('design and analysis of algorithms',),
    ('computer organization architecture',),
    ('C programming',),
    ('Python',),
    ('Java programming',),
    ('Design thinking',),
    ('ventre development',),
    ('engeneering mathematics',),
    ('Intermediate coding',),
    ('')

]

# Insert subjects into the database
cursor.executemany('INSERT INTO subjects (name) VALUES (?)', subjects)

# Commit the changes and close the connection
connection.commit()
connection.close()

print("Subjects inserted successfully.")
