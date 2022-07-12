#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Student{
    private:
        int studentID;
        char *name =  new char [40];
        int grades;

    public:
        void getID();
        void getName();
        void getGrade();
};

void Student :: getName(){
    string str;
    cout << "Name? ";
    cin.ignore();
    getline(cin, str);

    strcpy(name, str.c_str());
    cout << "-----" << endl;
}

void Student :: getID(){
    cout << "Student ID? ";
    cin >> studentID;
}

double arr[10];
int j = 0;

void Student :: getGrade(){
    cout << "How many Grades? ";
    cin >> grades;

    char *nameOfCourse = new char[40];
    double sum, averageGrade;
    int mark;

    for (int i = 1; i <= grades; i++){
        cout << "Name of Grade " << i << ": ";
        cin >> nameOfCourse;
        cout << "Mark of Grade " << i << ": ";
        cin >> mark;
        sum += mark;
        if (i < grades)
            cout << "-----" << endl;
    }
    averageGrade = sum / grades;
    arr[j] = averageGrade;
    j++;
}

int main(){
    cout << "Enter number of Students? ";
    int number;
    cin >> number;

    for (int i = 1; i <= number; i++){
        cout << "-----" << endl;
        cout << "Input details for Student " << i << ": " << endl;
        Student s;
        s.getID();
        s.getName();
        s.getGrade();
    }


    cout << "=====" << endl;

    for (int i = 1; i <= number; i++){
        cout << "Which student average grade? " << i << endl;
        Student s;
        cout << "Average grade for student " << i << ": " << arr[i - 1] << endl;
    }

    return 0;
}