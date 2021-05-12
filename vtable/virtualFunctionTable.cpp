#include <stdio.h>
class Parent
{
    public:virtual void func1() { 
        printf("AAA\n"); 
    }
    virtual void func2() { 
        printf("BBB\n"); 
    }
    
    virtual void func3() { 
        printf("CCC\n"); 
    }
    
    void func4() { 
        printf("DDD\n"); 
    }
};

class Child : public Parent
{
    virtual void func1() { 
        printf("childA\n"); 
    }
    
    public:virtual void func3() { 
        printf("childC\n"); 
    }
};

int main()
{
    Parent *p = new Parent;
    Parent *c = new Child;
    Child *cc = new Child;

    p->func1(); // Parent의 func1 함수 호출 
    c->func1(); // Child의 Overriding 된 func1 호출 
    c->func2(); // Parent의 func2 함수 호출 
    c->func4(); // Parent의 func4 함수 호출, 가상테이블엔 없음 
    cc->func3(); // Child의 func3 함수 호출 
}

    // 출처: https://cosyp.tistory.com/228 [nothing blog]