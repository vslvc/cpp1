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

// TODO: конструктор с параметрами и showOne()
