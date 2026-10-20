//
//  Child3.hpp
//  UniversityManagementSystem
//
//  Created by mak on 13.10.2023.
//

#ifndef Child3_hpp
#define Child3_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"

//Класс ВУЗ хранит данные по студентам, преподавателям и административному персоналу. Для административного персонала
//определено: ФИО, должность, телефон, область ответственности.

class ADMIN : public BASE{
public:
    ADMIN();//Конструктор пустой
    ADMIN(std:: string name1,std:: string surname1, std:: string fathername1,std :: string dolgnost1,std :: string number1, std :: string olast1);
    ADMIN(int n);//Конструктор

    void showOne() override;
public:
    std :: string name;
    std :: string surname;
    std :: string fathername;
    std :: string dolgnost;
    std :: string oblast;
    std :: string number;
};

#endif /* Child3_hpp */
