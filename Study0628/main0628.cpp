#include<iostream>
using namespace std;

int main()//main함수는 솔루션에 단 하나만 있어야 한다 (경민)
{
	// <문제> 숫자를 입력받아서 짝수일때 "n"은 짝수 입니다. 홀수일때 "n"은 홀수 입니다.로 출력하기

	/*int n = 0;
	cout << "숫자입력" << endl;
	cin >> n;*/

	/*if (n % 2 == 0)
	{
		cout << "n은 짝수 입니다" << endl;
}
	if(n % 2 == 1)
	{
		cout << "n은 홀수입니다" << endl;
	}*/


	// <문제> 숫자를 입력받아서 양수일때 양수입니다. 음수일때 음수입니다. 0일때 0입니다로 출력하기
	
	//if (n > 0)
	//{
	//	cout << "양수입니다" << endl;
	//}
	//else if (n == 0)
	//{
	//	cout << "0입니다" << endl;
	//}
	//else // ()조건을 사용할 수 없다. 그외 나머지 모두 (경민)
	//{
	//	cout << "음수입니다" << endl;
	//}
	

	//<문제> 점수를 입력받아서 90 이상이면 A, 80~89 B, 70~79 C, 60~69 D, 그외는 F를 출력하기
	
	//int score = 0;
	//cout << "점수입력" << endl;
	//cin >> score;
	//if (score >= 90)
	//{
	//	cout << "점수는 A" << endl;
	//}
	//else if(89>score && score>=80)//&&를 사용할 것!! 89>score>=80을 하면 잘못된 값이 나옴 (경민) 
	//{ 
	//	cout << "점수는 B" << endl;
	//}
	//else if (79 > score && score >= 70)
	//{
	//	cout << "점수는 C" << endl;
	//}
	//else if (69 > score && score >= 60)
	//{
	//	cout << "점수는 D" << endl;
	//}
	//else
	//{
	//	cout << "점수는 F" << endl;
	//}


	//<문제> 세 정수를 입력받아서 크기순으로 출력하기. 이해하기 어렵다

	/*int a, b, c = { 0 };
	cout << "숫자를 입력하세요" << endl;
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


	//<문제> 조건문 ; 숫자를 입력하면 여러 옵션 중 그 숫자에 해당하는 옵션으로 넘어가는 구조
	
	//int choice = 0;
	//cout << "새 게임: 1" << endl;
	//cout << "불러오기: 2" << endl;
	//cout << "설정: 3" << endl;
	//cout << "크레딧: 4" << endl;
	//cin >> choice;
	//if (choice == 1)
	//{
	//	cout << "새 게임" << endl;
	//}
	//else if (choice == 2)
	//{
	//	cout << "불러오기" << endl;
	//}
	//else if (choice == 3)
	//{
	//	cout << "설정" << endl;
	//}
	//else if (choice == 4)
	//{
	//	cout << "크레딧" << endl;
	//}
	//else
	//{
	//	cout << "잘못 입력하셨습니다" << endl;
	//}


//<문제> switch문 ; 숫자를 입력하면 여러 옵션 중 그 숫자에 해당하는 옵션으로 넘어가는 구조

   int choice = { 0 };
   cout << "새 게임: 1" << endl;
   cout << "불러오기: 2" << endl;
   cout << "설정: 3" << endl;
   cout << "크레딧: 4" << endl;
   cin >> choice;

switch (choice)
{
	case 1:
		cout << "새 게임" << endl;
		break;

	case 2:
		cout << "불러오기" << endl;
		break;

	case 3:
		cout << "설정" << endl;
		break;

	case 4:
		cout << "크레딧" << endl;
		break;

	default:
		cout << "잘못 입력하셨습니다" << endl;
		break;
}

	return 0;
}