#include <iostream>
#include <fstream>
using namespace std;

// ---------- Register Student ----------
void registerStudent() {
    string name, index;
    ofstream file("students.txt", ios::app);

    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter index number: ";
    getline(cin, index);

    file << name << "," << index << endl;
    file.close();

    cout << "Student registered successfully!\n\n";
}

// ---------- View Students ----------
void viewStudents() {
    ifstream file("students.txt");
    string line;

    cout << "\n--- Registered Students ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
    cout << endl;
}

// ---------- Create Session ----------
void createSession() {
    cout << "Lecture session created successfully!\n\n";
}
void searchStudent() {
    ifstream file("students.txt");
    string line, searchIndex;
    bool found = false;

    cout << "Enter index number to search: ";
    cin.ignore();
    getline(cin, searchIndex);

    while (getline(file, line)) {
        if (line.find(searchIndex) != string::npos) {
            cout << "Student Found: " << line << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }

    file.close();
    cout << endl;
}
void markAttendance() {
    string index, status;

    ofstream file("attendance.txt", ios::app);

    cout << "Enter student index number: ";
    cin.ignore();
    getline(cin, index);

    cout << "Enter attendance (P = Present, A = Absent, L = Late): ";
    getline(cin, status);

    file << index << " - " << status << endl;
    file.close();

    cout << "Attendance recorded successfully!\n\n";
}
void viewAttendanceReport() {
    ifstream file("attendance.txt");
    string line;
    int present = 0, absent = 0, late = 0;

    cout << "\n--- Attendance Report ---\n";

    while (getline(file, line)) {
        cout << line << endl;

        if (line.find("P") != string::npos)
            present++;
        else if (line.find("A") != string::npos)
            absent++;
        else if (line.find("L") != string::npos)
            late++;
    }

    cout << "\nSummary:\n";
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    cout << "Late: " << late << endl << endl;

    file.close();
}




// ---------- MAIN ----------
int main() {
    int choice;
  do {
        cout << "===== DIGITAL ATTENDANCE SYSTEM =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Create Lecture Session\n";
        cout << "4. Exit\n";
        cout << "5. Search Student\n";
        cout << "6. Mark Attendance\n";
        cout << "7. View Attendance Report\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            registerStudent();
        }
        else if (choice == 2) {
            viewStudents();
        }
        else if (choice == 3) {
            createSession();
        }
        else if (choice == 4) {
            cout << "Goodbye!\n";
        }
        else if (choice == 5){
            searchStudent();
        }
        else if (choice == 6){
            markAttendance();
        }
        else if (choice == 7){
            viewAttendanceReport();
        }
        else {
            cout << "Invalid choice!\n\n";
        }

    } while (choice != 4);

    return 0;
}
