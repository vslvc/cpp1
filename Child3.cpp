//
//  Child3.cpp
//  UniversityManagementSystem
//
//  Created by mak on 13.10.2023.
//

#include "Child3.hpp"
#include <iostream>

using namespace std;

ADMIN::ADMIN(){

}

ADMIN::ADMIN(int n){
    cout << "Введите ФИО\n->" ;
    cin >> name;
    cin >> surname;
    cin >> fathername;
    cout << "Введите должность, телефон, область ответственности\n->";
    cin >> dolgnost;
    cin >> number;
    cin >> oblast;

}

ADMIN:: ADMIN(std:: string name1,std:: string surname1, std:: string fathername1,std :: string dolgnost1,std :: string number1, std :: string oblast1){

    name = name1;
    surname = surname1;
    fathername = fathername1;
    dolgnost = dolgnost1;
    oblast = oblast1;
    number = number1;

}

void ADMIN::showOne (){
    cout << name <<"\t\t\t" << surname <<"\t\t\t" << fathername <<"\t\t\t" << dolgnost <<"\t\t\t" <<number << "\t\t\t" <<oblast << "\n";
}
