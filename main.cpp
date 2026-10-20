//
//  main.cpp
//  ТехнологияПрограммирования1
//
//  Created by mak on 09.10.2023.
//

//Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов.
//Класс Keeper должен обеспечивать следующие функции:
// ▪ добавление и удаление производных объектов абстрактного класса Base
//   (базовый класс определяется согласно варианту задания);
// ▪ полное сохранение себя в файле;
// ▪ полное восстановление себя из файла.

//Класс ВУЗ хранит данные по студентам, преподавателям и административному персоналу.
//Для каждого студента определено: ФИО, группа, наименование специальности, текущий курс, средний балл.
//Для каждого преподавателя определено: ФИО; перечислены группы, которые ведет; предметы, которые преподает.
//Для административного персонала определено: ФИО, должность, телефон, область ответственности.

#include <iostream>
#include <string>
#include "baseAbstractClass.hpp"
#include "Child1.hpp"
#include "keeper.hpp"

using namespace std;

int main(){
    std :: string s1 = "\n\n\n\n(1)Вывод базы данных\n(2)Добавить\n(3)Удалить\n(4)Востановиться из файла\n(5)Edit\n(6)Назад\n->";
    std :: string s2 = "(1)Студент\n(2)Преподаватель\n(3)Администрация\n->";

    Keeper K;
    int choose;
    cout << s1;
    cin >> choose;
    int choose1;
    while(true){
        switch (choose) {
            case 1:

                K.showAll(1);
                K.showAll(2);
                K.showAll(3);


                cout << s1;
                cin >> choose;

                break;

            case 2:

                cout << s2 ;
                cin >> choose1;
                K.add(choose1);

                cout << s1;
                cin >> choose;
                break;
            case 3:
                cout << s2 ;
                cin >> choose1;
                K.pullBack(choose1);

                cout << s1;
                cin >> choose;
                break;
            case 4:
                cout << s2 ;
                cin >> choose1;
                K.loadFromResFile(choose1);

                cout << s1;
                cin >> choose;
                break;

            case 5:
                cout << s2 ;
                cin >> choose1;
                K.editOne(choose1);

                cout << s1;
                cin >> choose;
                break;
            case 6:{
                ofstream f("STUDENT.txt");
                ofstream f1("TEACHER.txt");
                ofstream f2("ADMIN.txt");
                f.close();
                f1.close();
                f2.close();
                break;
            }
            default:
                break;
        }
    }
}
