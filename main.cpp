#include <iostream>



using namespace std;

int main()
{
	//�Է�
	int Number[10] = { 0, };
	int No = 0;
	int SumAll = 0;

	void input();
	{
		for (int i = 0; i <= 9; ++i)
		{
			cout << "�����Է�" << endl;
			cin >> No;
			Number[i] = No;
		}
	}
	//���ϱ�
	void Sum();
	{
		for (int i = 0; i <= 9; ++i)
		{
			SumAll += Number[i];
		}
	}
	//�ջ�
	cout << "���ڵ��� ����" << SumAll << endl;
	return 0;
}