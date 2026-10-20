
#include "Child2.hpp"
#include <iostream>

using namespace std;

TEACHER::TEACHER(){

}

TEACHER::TEACHER(int n){
    cout << "Введите ФИО\n->" ;
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Введите группы (через запятую) , название предмета\n->";
    cin >> group;
    cin >> predmet;

}

TEACHER:: TEACHER(std:: string name1,std:: string surname1, std:: string fathername1,std :: string group1,std :: string predmet1){

    name = name1;
    surname = surname1;
    fathername = fathername1;
    group = group1;
    predmet = predmet1;

}

void TEACHER::showOne (){
    cout << name <<"\t\t\t" << surname <<"\t\t\t" << fathername <<"\t\t\t" << group <<"\t\t\t" <<predmet << "\n";
}
