#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    string course;
    double grade, credit;

    double totalCredits = 0, totalGradePoints = 0;

    cout << "\nEnter course details:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> course;

        cout << "Grade: ";
        cin >> grade;

        cout << "Credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += grade * credit;

        cout << course << " recorded.\n";
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}