#include<iostream>
using namespace std;

int main()//main�Լ��� �ַ�ǿ� �� �ϳ��� �־�� �Ѵ� (���)
{
	// <����> ���ڸ� �Է¹޾Ƽ� ¦���϶� "n"�� ¦�� �Դϴ�. Ȧ���϶� "n"�� Ȧ�� �Դϴ�.�� ����ϱ�

	/*int n = 0;
	cout << "�����Է�" << endl;
	cin >> n;*/

	/*if (n % 2 == 0)
	{
		cout << "n�� ¦�� �Դϴ�" << endl;
}
	if(n % 2 == 1)
	{
		cout << "n�� Ȧ���Դϴ�" << endl;
	}*/


	// <����> ���ڸ� �Է¹޾Ƽ� ����϶� ����Դϴ�. �����϶� �����Դϴ�. 0�϶� 0�Դϴٷ� ����ϱ�
	
	//if (n > 0)
	//{
	//	cout << "����Դϴ�" << endl;
	//}
	//else if (n == 0)
	//{
	//	cout << "0�Դϴ�" << endl;
	//}
	//else // ()������ ����� �� ����. �׿� ������ ��� (���)
	//{
	//	cout << "�����Դϴ�" << endl;
	//}
	

	//<����> ������ �Է¹޾Ƽ� 90 �̻��̸� A, 80~89 B, 70~79 C, 60~69 D, �׿ܴ� F�� ����ϱ�
	
	//int score = 0;
	//cout << "�����Է�" << endl;
	//cin >> score;
	//if (score >= 90)
	//{
	//	cout << "������ A" << endl;
	//}
	//else if(89>score && score>=80)//&&�� ����� ��!! 89>score>=80�� �ϸ� �߸��� ���� ���� (���) 
	//{ 
	//	cout << "������ B" << endl;
	//}
	//else if (79 > score && score >= 70)
	//{
	//	cout << "������ C" << endl;
	//}
	//else if (69 > score && score >= 60)
	//{
	//	cout << "������ D" << endl;
	//}
	//else
	//{
	//	cout << "������ F" << endl;
	//}


	//<����> �� ������ �Է¹޾Ƽ� ũ������� ����ϱ�. �����ϱ� ��ƴ�

	/*int a, b, c = { 0 };
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b) 
	{
		if (b > c)

		{
			cout << "a, b, c" << endl;
		}
		else if (a > c)
		{
			cout << "a, c, b" << endl;
		}
		else
		{
			cout << "c,a,b" << endl;
		}
	}
	else 
	{
		if (a > c)
		{
			cout << "b, a, c" << endl;
	    }
		else if (b > c)
		{
			cout << "b, c, a" << endl;
		}

	}*/


	//<����> ���ǹ� ; ���ڸ� �Է��ϸ� ���� �ɼ� �� �� ���ڿ� �ش��ϴ� �ɼ����� �Ѿ�� ����
	
	//int choice = 0;
	//cout << "�� ����: 1" << endl;
	//cout << "�ҷ�����: 2" << endl;
	//cout << "����: 3" << endl;
	//cout << "ũ����: 4" << endl;
	//cin >> choice;
	//if (choice == 1)
	//{
	//	cout << "�� ����" << endl;
	//}
	//else if (choice == 2)
	//{
	//	cout << "�ҷ�����" << endl;
	//}
	//else if (choice == 3)
	//{
	//	cout << "����" << endl;
	//}
	//else if (choice == 4)
	//{
	//	cout << "ũ����" << endl;
	//}
	//else
	//{
	//	cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
	//}


//<����> switch�� ; ���ڸ� �Է��ϸ� ���� �ɼ� �� �� ���ڿ� �ش��ϴ� �ɼ����� �Ѿ�� ����

   int choice = { 0 };
   cout << "�� ����: 1" << endl;
   cout << "�ҷ�����: 2" << endl;
   cout << "����: 3" << endl;
   cout << "ũ����: 4" << endl;
   cin >> choice;

switch (choice)
{
	case 1:
		cout << "�� ����" << endl;
		break;

	case 2:
		cout << "�ҷ�����" << endl;
		break;

	case 3:
		cout << "����" << endl;
		break;

	case 4:
		cout << "ũ����" << endl;
		break;

	default:
		cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
		break;
}

	return 0;
}