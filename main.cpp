#include <iostream>
using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    int marks[MAX_STUDENTS];
    int numberOfStudents;
    int total = 0;

    cout << "STUDENT GRADE MANAGEMENT SYSTEM\n";

    cout << "Enter number of students (1-100): ";
    cin >> numberOfStudents;

    if (numberOfStudents < 1 ||
        numberOfStudents > MAX_STUDENTS) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter mark for student "
             << i + 1 << " (0-100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid mark. Enter a mark "
                 << "between 0 and 100.\n";
            return 1;
        }

        total += marks[i];
    }

    int highest = marks[0];
    int lowest = marks[0];

    cout << "\nSTUDENT MARKS\n";

    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Student " << i + 1
             << ": " << marks[i] << endl;

        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    double average =
        static_cast<double>(total) / numberOfStudents;

    cout << "\nTotal marks: " << total << endl;
    cout << "Class average: " << average << endl;
    cout << "Highest mark: " << highest << endl;
    cout << "Lowest mark: " << lowest << endl;

    return 0;
}
