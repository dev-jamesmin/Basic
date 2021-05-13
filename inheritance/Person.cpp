#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char name[20];  // 이름
    int age;  // 나이
public:
    Person(const char myname[], int myage) : age(myage)
    {
        // strcpy_s(name, 20, myname); 미지원
        strcpy(name, myname);
    }
    void WhatIsYourName() const
    {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const
    {
        cout << "I'm " << age << " years old." << endl;
    }
};

class UnivStudent : public Person  // Person을 상속함 = Person의 모든 멤버를 가지고 옴
{
private:
    char major[50];  // 전공과목 이름
public:
    UnivStudent(const char myname[], int myage, const char mymajor[]) : Person(myname, myage) // 부모클래스 Person의 자체 생성자 호출
    {
        // strcpy_s(major, 50, mymajor);
        strcpy(major, mymajor);
        
    }
    void WhoAreYou() const
    {
        WhatIsYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl << endl;
    }
};

int main(void)
{
    UnivStudent ustd1("Park Hyo Won", 14, "Computer Science");
    ustd1.WhoAreYou();

    UnivStudent ustd2("La Tae In", 14, "Medical Science");
    ustd2.WhoAreYou();

    system("pause"); // VC++ 일때만
    return 0;
}