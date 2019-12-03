#ifndef _B
#define _B

class A; //注意1：需要用extern声明A

class B
{
  public:
    int b;
    //A* objecta;//注意2：调用A的时候需要用指针
  public:
    B();
    int getb();
    void handle(A *a);
};
#endif