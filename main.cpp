//#include <iostream>
//
//
//
//using namespace std;
//
//int main()
//{
//	
//	//연산횟수
//	int* No = new int;
//	void Input();
//	{
//		
//		cout << "연산 횟수 설정" << endl;
//		cin >> *No;
//	}
//
//	//배열 값 설정
//	void Array();
//	{
//		//덱에 난수 채우기
//		srand(static_cast<unsigned int>(time(NULL)));
//		int* Deck = new int[10];
//
//		for (int i = 0; i < 10; ++i)
//		{
//			Deck[i] = (rand() % 100)-50;						//Deck배열에 0~51 까지의 값을 13으로 나머지 계산하여 값에 1을 더해 넣기
//		}
//		
//		
//		for (int i = 0; i < 30; ++i)
//		{
//
//		}
//		
//	}
//
//	//더하기
//	void Sum();
//	{
//		for (int i = 0; i <= 9; ++i)
//		{
//			SumAll += Number[i];
//		}
//	}
//	//합산
//	cout << "숫자들의 합은" << SumAll << endl;
//	return 0;
//}




#include <iostream>



using namespace std;

int main()
{
	int* Data = new int[3];	//Data의 배열값을 heep에 위치 시킴(한줄로 작성)

	Data[0] = 100;			//heep에 위치한 Data값 100 입력 
	Data[1] = 50;

	cout << Data[0];

	delete[] Data;			//heep의 Data위치 없엠
	Data = nullptr;			//Data의 코드메모리 값을 비움
	return 0;
}