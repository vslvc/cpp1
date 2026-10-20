
#include "Child1.hpp"
#include <iostream>

using namespace std;

STUDENT::STUDENT(){

}

STUDENT::STUDENT(int n){
    cout << "Введите ФИО\n->" ;
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Введите группу, направление, курс и средний балл\n->";
    cin >> group;
    cin >> speciality;
    cin >> course;
    cin >> averagScore;
}

STUDENT::STUDENT(std:: string name1,std:: string surname1, std:: string fathername1,int group1,std:: string speciality1,int course1,double averagScore1){

    name = name1;
    surname = surname1;
    fathername = fathername1;
    group = group1;
    speciality = speciality1;
    course = course1;
    averagScore = averagScore1;

}

void STUDENT::showOne (){
    cout << name <<"\t\t\t" << surname <<"\t\t\t" << fathername <<"\t\t\t" << group <<"\t\t\t" <<speciality <<"\t\t\t" <<course <<"\t\t\t" << averagScore << "\n";
}
