//вариант 6
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

//1

//int main() {
//    const int a = 10;
//    int m[a] = { 5, 3, 8, 1, 2, 7, 4, 6, 9, 0 };
//
//    for (int i = 0; i < a - 1; ++i) {
//        for (int j = 0; j < a - i - 1; ++j) {
//            if (m[j] > m[j + 1]) {
//                int temp = m[j];
//                m[j] = m[j + 1];
//                m[j + 1] = temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < a; ++i) {
//        cout << m[i] << " ";
//    }
//
//    for (int j = 6; j < 7; ++j) {
//        cout << "\n" << m[j];
//
//    }
//
//    cout << "\n" << m[6];
//}

//2

//int main() {
//    const int a = 15;
//    const int b = 10;
//    const int c = 5;
//    const int d = 20;
//    int result = 0;
//    int m1[a][b];
//    int m2[c][d];
//
//    for (int i = 0; i < a; ++i) {
//
//        for (int j = 0; j < b; ++j) {
//            m1[i][j] = i + j;
//            result += m1[i][j];
//            cout << m1[i][j] << " ";
//        }
//
//        cout << endl;
//    }
//
//    cout << "\n";
//    cout << "\n";
//    cout << "\n";
//
//    for (int i = 0; i < c; ++i) {
//        for (int j = 0; j < d; ++j) {
//            m2[i][j] = i + j;
//            result += m2[i][j];
//        }
//    }
//
//    cout << "result: " << result;
//}

//3


struct Student {
    char name[50];
    double grades[5];
    int numGrades;
};

double calculateAvg(Student student) {
    double sum = 0;
    for (int i = 0; i < student.numGrades; ++i) {
        sum += student.grades[i];
    }
    return student.numGrades == 0 ? 0 : sum / student.numGrades;
}

int main() {
    Student student;
    strcpy(student.name, "Tom");

    student.grades[0] = 4.5;
    student.grades[1] = 3.7;
    student.grades[2] = 5.0;
    student.grades[3] = 4.2;
    student.grades[4] = 4.0;
    student.numGrades = 5; 

    double avg = calculateAvg(student);
    std::cout << "avg student grade: " << student.name << " = " << avg << std::endl;

    return 0;
}


//4

//class Employee {
//private:
//    std::string name;
//    double salary;
//
//public:
//    Employee(std::string employeeName, double employeeSalary) {
//        name = employeeName;
//        salary = employeeSalary;
//    }
//
//    void upSalary(double percent) {
//        salary += salary * (percent / 100);
//    }
//
//    void display() {
//        std::cout << "name: " << name << ", salary: $" << salary << std::endl;
//    }
//};
//
//int main() {
//    Employee emp("Tom", 50000);
//
//    emp.display();
//
//    emp.upSalary(10);
//
//    emp.display();
//}
