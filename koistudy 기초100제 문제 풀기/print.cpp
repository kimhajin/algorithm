//1 ~ 9 번 문제 출력 // 
// Hello 출력하기 공백을 이용하여 2문장 출력 줄변경하기  //
/*
 
 output
 Hello
 World
 
 \n : 줄을 바꿀 위치에 넣어야 한다.
 \t : tab
 이러한 문자를 이스케이프 문자라고 하고, 형식에 맞추어 출력하는 문장 안에 줄을 바꾸는 등의 특별한
 의미들을 나타내기 위해 사용한다.
 
 6번 문제 : 특수문자 출력
 출력 마지막 문제 : 이스케이프 문자를 이용하여 출력하기 !!
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "'Hello\nWorld'" << endl;
    cout << "!@#!$%$%#%^$%^" << endl;
    cout << "#include <iostream>\nmain()\n{\n\tcout<< ""Hello"";\n}";
    return 0 ;
}