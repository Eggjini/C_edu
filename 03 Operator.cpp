#include<iostream>
using namespace std;
int main()
{
	//��Ģ���� ������ - �Է� �� ����ϱ�
	//float NUM_1, NUM_2, RES; //�Ǽ��� ���� NUM_1, NUM_2, RES �� ����
	//cout << "ù ��° ���� �Է��ϼ��� >> ";
	//cin >> NUM_1; //�Է��� ���� NUM_1 �� ����
	//cout << "�� ��° ���� �Է��ϼ��� >> ";
	//cin >> NUM_2; //�Է��� ���� NUM_2 �� ����

	//RES = NUM_1 + NUM_2; //RES�� NUM_1 �� NUM_2 �� ������ ����
	//cout << NUM_1 << "+" << NUM_2 << "=" << RES << endl; //NUM_1 + NUM_2 = RES�� ���
	
	//������, ������ ����
	//int NUM_1, NUM_2, Q, R; //������ ���� NUM_1, NUM_2, Q, R �� ����
	//cout << "ù ��° ���� �Է��ϼ��� >> ";
	//cin >> NUM_1;
	//cout << "�� ��° ���� �Է��ϼ��� >> ";
	//cin >> NUM_2;
	//Q = NUM_1 / NUM_2; //Q �� ���� NUM_1 / NUM_2 �� ������ ����
	//R = NUM_1 % NUM_2; //R �� ���� NUM_1 / NUM_2 �� �������� ����
	//cout << endl << NUM_1 << " ������ " << NUM_2 << " �� ���� " << Q << ", ��������" << R << " �Դϴ�." << endl; //���� ��� (��� ������) �� ���

	//����, ���� ������ - ++�� --
	//int a = 1;
	//cout << endl <<	a;
	//a++;
	//cout << endl << a;
	//++a;
	//cout << endl << a << endl;
	//return 0;
	float NUM_1, NUM_2, RES;
	int mark = 0;
	cout << "ù��° ���� �Է��ϼ��� >> ";
	cin >> NUM_1;
	cout << "�ι�° ���� �Է��ϼ��� >> ";
	cin >> NUM_2;
	RES = NUM_1 + NUM_2;
	cout << NUM_1 << " + " << NUM_2 << " = " << RES << endl;
	return 0;
}