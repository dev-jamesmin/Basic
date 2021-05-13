#include <iostream>
// include <windows.h> -> mac 사용 불가
#include <unistd.h>
using namespace std;

class SoBase
{
private:
    int baseNum;  
public:
    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase() : " << baseNum << endl;
    }
    ~SoBase()
    {
        cout << "~SoBase() : " << baseNum << endl;
        usleep(2000); // 1000 마이크로 초 = 1초
    }
};

class SoDerived : public SoBase  
{
private:
    int derivNum;
public:
    SoDerived(int n) : SoBase(n), derivNum(n)
    {
        cout << "SoDerived(int n) : " << derivNum << endl;
    }
    ~SoDerived()
    {
        cout << "~SoDerived() : " << derivNum << endl;
        usleep(2000); // 1000 마이크로 초 = 1초
    }
};

int main(void)
{
    SoDerived drv1(15);  // 스택에 저장
    SoDerived drv2(27);  // 스택에 저장

    system("pause"); // VC++ 일때만
    return 0;
}