#include <stdio.h>

class Parent
{
    public:void show()
    {
        // AAA
        printf("AAA\n");
    }
    
    public:void show(int a) { 
        // CCC
         printf("CCC\n"); 
    }
}; 

class Child : public Parent
{
    public:void show() { 
        // BBB
        printf("BBB\n");  
    }
}; 

int main()
{
    Child *c = new Child;
    c->show();
    // c->show(10); // Error! 
}

    // 출처: https://cosyp.tistory.com/228 [nothing blog]