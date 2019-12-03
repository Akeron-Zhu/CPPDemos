#include <iostream>
#include "a.h" //注意3：在B.cpp里面导入A的头文件 ，而不是B的头文件

using namespace std;

B::B()
{
    this->b = 200;
}

int B::getb()
{
    return b;
}

void B::handle(A *a)
{

    cout << "in B , objecta->a=" << a->geta() << endl;
}