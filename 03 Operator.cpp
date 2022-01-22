#include<iostream>
using namespace std;
int main()
{
	//사칙연산 연산자 - 입력 값 계산하기
	//float NUM_1, NUM_2, RES; //실수형 변수 NUM_1, NUM_2, RES 를 선언
	//cout << "첫 번째 값을 입력하세요 >> ";
	//cin >> NUM_1; //입력한 값을 NUM_1 에 대입
	//cout << "두 번째 값을 입력하세요 >> ";
	//cin >> NUM_2; //입력한 값을 NUM_2 에 대입

	//RES = NUM_1 + NUM_2; //RES를 NUM_1 과 NUM_2 의 합으로 대입
	//cout << NUM_1 << "+" << NUM_2 << "=" << RES << endl; //NUM_1 + NUM_2 = RES를 출력
	
	//나눗셈, 나머지 연산
	//int NUM_1, NUM_2, Q, R; //정수형 변수 NUM_1, NUM_2, Q, R 을 선언
	//cout << "첫 번째 값을 입력하세요 >> ";
	//cin >> NUM_1;
	//cout << "두 번째 값을 입력하세요 >> ";
	//cin >> NUM_2;
	//Q = NUM_1 / NUM_2; //Q 의 값을 NUM_1 / NUM_2 의 몫으로 대입
	//R = NUM_1 % NUM_2; //R 의 값을 NUM_1 / NUM_2 의 나머지로 대입
	//cout << endl << NUM_1 << " 나누기 " << NUM_2 << " 의 몫은 " << Q << ", 나머지는" << R << " 입니다." << endl; //연산 결과 (몫과 나머지) 를 출력

	//증가, 감소 연산자 - ++과 --
	//int a = 1;
	//cout << endl <<	a;
	//a++;
	//cout << endl << a;
	//++a;
	//cout << endl << a << endl;
	//return 0;
	float NUM_1, NUM_2, RES;
	int mark = 0;
	cout << "첫번째 값을 입력하세요 >> ";
	cin >> NUM_1;
	cout << "두번째 값을 입력하세요 >> ";
	cin >> NUM_2;
	RES = NUM_1 + NUM_2;
	cout << NUM_1 << " + " << NUM_2 << " = " << RES << endl;
	return 0;
}