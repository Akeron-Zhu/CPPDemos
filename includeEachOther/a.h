#ifndef _A
#define _A
#include "b.h" //A的头文件导入了B的头文件

class A
{
  public:
    int a;
    //B* objectb;//A的头文件导入了B的头文件，在调用B的时候就可以不用指针，也可以用指针

  public:
    A();
    int geta();
    void handle(B *b);
    void hello();
};
#endif