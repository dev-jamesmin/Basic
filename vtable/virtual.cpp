#include <stdio.h>

class Parent
{
    public:virtual void show() { 
        // AAA 
        printf("AAA\n");
    }
}; 

class Child : public Parent
{
    virtual void show() { 
        // BBB
        printf("BBB\n"); 
    }
}; 

class Childchild : public Child
{
    virtual void show() { 
        // CCC
        printf("CCC\n");  
    }
}; 

int main()
{
    Parent *p = new Parent;
    Child *c = new Child;
    Childchild *cc = new Childchild;
    p->show();
    p = c;
    p->show();
    p = cc;
    p->show();
}

// 출처: https://cosyp.tistory.com/228 [nothing blog]