#include <iostream>

using namespace std;

class Swap
{
private:
    /* data */
    int temp; // 교환을 위한 임시 변수
public:
    Swap(/* args */);
    ~Swap();
    void swap(int a,int b)
    {
        temp = a;
        a = b;
        b = temp;
        cout << "swap 함수 내의 a,b 주소 :" << 
    }
};

// Swap::S
// int temp;wap(/*
// int temp; args */)
// {
// }

// Swap::~
// int temp;Swap()
// {
// }

// int temp;