#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main() {
    Student student;
    
    cout << "Enter student details:\n";
    cout << "Name: ";
    getline(cin, student.name);
    cout << "Roll Number: ";
    cin >> student.rollNumber;
    cin.ignore();
    
    cout << "Enter marks for 5 subjects:\n";
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> student.marks[i];
        sum += student.marks[i];
    }
    student.totalMarks = sum;
    
    cout << "\nStudent details:\n";
    cout << "Name: " << student.name << "\n";
    cout << "Roll Number: " << student.rollNumber << "\n";
    cout << "Marks:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": " << student.marks[i] << "\n";
    }
        cout << "Total Marks: " << student.totalMarks << "\n";
    
    return 0;
}
