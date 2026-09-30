#include "keeper.hpp"
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "Child2.hpp"
#include "Child3.hpp"
#include <iostream>
#include <exception>

using namespace std;

//Конструктор
Keeper::Keeper(){

}

//Keeper::~Keeper(){
//    delete studArr;
//}

//Создание динамического массива объектов
//int size = 5;
//MyClass* myArray = new MyClass[size];

//восстановление себя из файла.
void Keeper::loadFromFile(int n){


    switch (n) {
        case 1:{
            //Вспомогательные переменные

            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            int group1;
            int course1;
            double averagScore1;
            std :: string speciality1;
            ifstream file("STUDENT.txt");
            for (int i = 0; i < sizeS; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> speciality1 >> course1 >> averagScore1;
                STUDENT S(name1,surname1,fathername1,group1,speciality1,course1,averagScore1);
                studArr[i] = S;
            }

            file.close();

            break;

        }

        case 2:{
            //Вспомогательные переменные

            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string group1;
            std :: string predmet1;
            ifstream file("TEACHER.txt");
            for (int i = 0; i < sizeT; i ++){
                file >> name1 >> surname1 >> fathername1 >> group1 >> predmet1;
                TEACHER T(name1,surname1,fathername1,group1,predmet1);
                teachArr[i] = T;
            }

            file.close();


            break;

        }

        case 3:{
            //Вспомогательные переменные

            std :: string name1;
            std :: string surname1;
            std :: string fathername1;
            std :: string dolgnost1;
            std :: string oblast1;
            std :: string number1;
            ifstream file2("ADMIN.txt");
            for (int i = 0; i < sizeA; i ++){
                file2 >> name1 >> surname1 >> fathername1 >> dolgnost1 >> number1 >> oblast1;
                ADMIN A(name1,surname1,fathername1,dolgnost1,number1, oblast1);
                adArr[i] = A;
            }

            file2.close();

            break;

        }


        default:
            break;
    }

    //this->showAll();
}

template <typename T>
void Keeper::show(int size, T* arr, int n){
    std :: string ss = "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tГРУППА\t\t\tСПЕЦИАЛЬНОСТЬ\t\t\tКУРС\t\t\tСРЕДНИЙ БАЛЛ\n_______________________________________________________________________________________________________________\n";
    std :: string st = "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tГРУППЫ\t\t\tПРЕДМЕТ\n_______________________________________________________________________________________________________________\n";
    std :: string sa = "\n\n\n\n#\tФАМИЛИЯ\t\t\tИМЯ\t\t\t\tОТЧЕСТВО\t\t\tДОЛЖНОСТЬ\t\t\tНОМЕР\t\tОБЛАСТЬ ОТВЕТСТВЕННОСТИ\n_______________________________________________________________________________________________________________\n";

    switch (n) {
        case 1:
            cout << ss;
            break;
        case 2:
            cout << st;
            break;
        case 3:
            cout << sa;
            break;
    }
    for (int i = 0; i< size; i++){
        cout<< i << "\t";
        arr[i].showOne();
    }
}

void Keeper::showAll(int n){
    this->loadFromFile(n);
    switch (n) {
        case 1:
            this->show(sizeS, studArr, 1);
            break;
        case 2:
            this->show(sizeT, teachArr, 2 );
            break;
        case 3:
            this -> show(sizeA, adArr, 3);
            break;
        default:
            break;
    }
}

int GetFileSize(const std::string& filename) {
    std::ifstream file(filename); // Открываем файл для чтения
    std::string line;
    int size = 0;

    if (file.is_open()) { // Проверяем, удалось ли открыть файл
        while (std::getline(file, line)) {
            size++; // Увеличиваем счетчик для каждой строки
        }
        file.close(); // Закрываем файл
    } else {
        std :: exception (error);
        std::cout << "Не удалось открыть файл\n";
        throw error;
    }

    return size;
}

int Keeper::size(int n){

    switch (n) {
        case 1: {
            return GetFileSize("STUDENT.txt");
        }
        case 2: {

            return GetFileSize("TEACHER.txt");
        }
        case 3: {
            return GetFileSize("ADMIN.txt");
        }
        case 4: {
            return GetFileSize("STUDENT_res.txt");
        }
        case 5: {
            return GetFileSize("TEACHER_res.txt");
        }
        case 6: {
            return GetFileSize("ADMIN_res.txt");
        }
        default:
            return 0;
    }
}
