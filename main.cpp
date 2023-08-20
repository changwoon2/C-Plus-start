#include <iostream>
#include <string>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int age = 0;
    int i {100};
    short b = 0;
    bool flag = true; //true1 false 0 으로 출력
    int garbage = 0;
    cout << garbage << endl;

    cout << flag << endl;
    //변수의 주소 확인
    //변수는 메모리 스택에 비 연속적으로 빈공간을 찾아 들어간다.
    //&앰퍼센트 : 주소 참조 연산자
    cout << "변수 age의 주소 : "  << &age << endl;
    cout << "변수 i의 주소 : "  << &i << endl;
    cout << "변수 b의 주소 : "  << &b << endl << endl;


    cout <<"short형 자료의 바이트크기 : " + to_string(sizeof(short)) <<endl;
    cout <<"int형 자료의 바이트크기 : " + to_string(sizeof(int)) <<endl;
    cout <<"long형 자료의 바이트크기 : " + to_string(sizeof(long)) <<endl;
    cout <<"long long형 자료의 바이트크기 : " + to_string(sizeof(long long)) <<endl;
    cout <<"float형 자료의 바이트크기 : " + to_string(sizeof(float)) <<endl;
    cout <<"double형 자료의 바이트크기 : " + to_string(sizeof(double )) <<endl;
    cout <<"long double형 자료의 바이트크기 : " + to_string(sizeof(long double)) <<endl;
    cout <<"bool형 자료의 바이트크기 : " + to_string(sizeof(bool)) <<endl;

    //sting 타입(문자열)
    string s1 = "안녕하세요";
    string s2 = "반갑습니다";
    //문자열끼리는 + 연산자로 결합 시킬수있다.
    string s3 = s1 + "" + s2 + "!!!";
    cout << s3 << endl;

    cout << "변수 s1주소 : "  << &s1 << endl;
    cout << "변수 s2주소 : "  << &s2 << endl;
    cout << "변수 s3주소 : "  << &s3 << endl;

    bool equal = (s1 == s2);
    cout << "s1 == s2 : " << equal << endl;

    const double TAX_RATE = 0.25; // 기호 상수 선언 및 초기화

}

//변수명 작성
//변수명은 숫자 시작하면 안된다
//변수명은 사이에 공백이 들어가면 안된다