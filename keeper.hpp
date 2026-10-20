//
//  keeper.hpp
//  UniversityManagementSystem
//
//  Created by mak on 12.10.2023.
//

//Разработать класс Keeper, который реализует контейнер для хранения и обработки объектов.
//Класс Keeper должен обеспечивать следующие функции:
// ▪ добавление и удаление производных объектов абстрактного класса Base
//   (базовый класс определяется согласно варианту задания);
// ▪ полное сохранение себя в файле;
// ▪ полное восстановление себя из файла.

#ifndef keeper_hpp
#define keeper_hpp

#include "Child1.hpp"
#include "Child2.hpp"
#include "Child3.hpp"
#include "baseAbstractClass.hpp"
#include <stdio.h>

class Keeper {
private:
    int sizeS = this->size(1);
    int sizeT = this->size(2);
    int sizeA = this->size(3);
    int sizeSR = this->size(4);
    int sizeTR = this->size(5);
    int sizeAR = this->size(6);
    STUDENT* studArr = new STUDENT[100000]; //Создали массив
    TEACHER* teachArr = new TEACHER[100000]; //Создали массив
    ADMIN* adArr = new ADMIN[100000]; //Создали массив



    int size(int n);
    void loadFromFile(int n);

    template <typename T>
    void pull(int size,T* arr, int n);

    template <typename T>
    void show(int size, T* arr, int n);


    template <typename T>
    void Edit(int size,T* arr, int n);

public:
    Keeper();
    Keeper(int s);
//    ~Keeper();
    void add(int n);
    void pullBack(int n);
    void editOne(int n);
    void saveInFile(int n);
    void loadFromResFile(int n);
    void showAll(int n);


};

#endif /* keeper_hpp */
