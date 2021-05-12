#include <stdio.h>

class Parent
{
    public:
    void show()
    {
       printf("this is parent\n");
    };
};

class Child : public Parent
{
    public:
    void show()
    {
        printf("this is child\n");
    }
};

class ChildChild : public Child
{
    public:
    void show() { 
        printf("this is childchild\n"); 
    }
}; 

int main()
{
    Parent *p = new Parent;
    Child *c = new Child;
    ChildChild *cc = new ChildChild;
    
    // test-> 1
    p-> show();
    c-> show();
    cc-> show();

    // test-> 2
    // Parent type
    p = c; 
    p->show(); 
    p = cc; 
    p->show();

}

// 출처: https://cosyp.tistory.com/228 [nothing blog]