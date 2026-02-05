#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main() {
    Student s;
    
    cout << "Enter student details:" << endl;
    cout << "Name: ";
    cin.getline(s.name, 50);
    
    cout << "Roll Number: ";
    cin >> s.rollNumber;
    cin.ignore();
    
    cout << "Enter marks for 5 subjects:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << "Subject " << i << ": ";
        cin >> s.marks[i-1];
    }
    
    s.totalMarks = 0;
    for(int i = 0; i < 5; i++) {
        s.totalMarks = s.totalMarks + s.marks[i];
    }
    
    cout << "\nStudent details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << "Subject " << i << ": " << s.marks[i-1] << endl;
    }
    cout << "Total Marks: " << s.totalMarks << endl;
    
    return 0;
}
