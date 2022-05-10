#include <iostream>



using namespace std;

int main()
{
	//입력
	int Number[10] = { 0, };
	int No = 0;
	int SumAll = 0;

	void input();
	{
		for (int i = 0; i <= 9; ++i)
		{
			cout << "숫자입력" << endl;
			cin >> No;
			Number[i] = No;
		}
	}
	//더하기
	void Sum();
	{
		for (int i = 0; i <= 9; ++i)
		{
			SumAll += Number[i];
		}
	}
	//합산
	cout << "숫자들의 합은" << SumAll << endl;
	return 0;
}