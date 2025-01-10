#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double grade;
public:
    Student(string n, double g) : name(n), grade(g) {}
    void display() {
        cout << "Name: " << name << ", Grade: " << grade << endl;
    }
    double getGrade() {
        return grade;
    }
};

int main() {
    vector<Student> students;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double grade;
        cout << "Enter name of student #" << (i + 1) << ": ";
        cin >> name;
        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        students.push_back(Student(name, grade));
    }

    cout << "\nStudent Grades:\n";
    for (Student s : students) {
        s.display();
    }

    return 0;
}
