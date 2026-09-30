#ifndef Child2_hpp
#define Child2_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"

//Класс ВУЗ хранит данные по студентам, преподавателям и административному персоналу. Для каждого преподавателя
//определено: ФИО; перечислены группы, которые ведет; предметы, которые преподает.

class TEACHER : public BASE{
public:
    TEACHER();//Конструктор пустой
    TEACHER(std:: string name1,std:: string surname1, std:: string fathername1,std :: string group1,std :: string predmet1);
    TEACHER(int n);//Конструктор

    void showOne() override;
public:
    std :: string name;
    std :: string surname;
    std :: string fathername;
    std :: string group;
    std :: string predmet;
};

#endif /* Child2_hpp */
