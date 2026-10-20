
#ifndef baseAbstractClass_hpp
#define baseAbstractClass_hpp

#include <stdio.h>
#include <fstream> //для чтения/записи в файл

class BASE{
public:
    virtual void showOne() = 0;
    virtual ~BASE();
};

#endif /* baseAbstractClass_hpp */
