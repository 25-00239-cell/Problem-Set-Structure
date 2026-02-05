#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
};

int main() {
    int n;
    cout << "Enter the number of people: ";
    cin >> n;
    cin.ignore();
    
    int total = 0;
    Person person;
    
    for(int i = 1; i <= n; i++) {
        cout << "Enter name of person " << i << ": ";
        cin.getline(person.name, 50);
        cout << "Enter age of person " << i << ": ";
        cin >> person.age;
        cin.ignore();
        total += person.age;
    }
    
    cout << "\nThe average age of the people is " << total/n << endl;
    return 0;
}
