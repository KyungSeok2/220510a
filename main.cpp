//#include <iostream>
//
//
//
//using namespace std;
//
//int main()
//{
//	
//	//����Ƚ��
//	int* No = new int;
//	void Input();
//	{
//		
//		cout << "���� Ƚ�� ����" << endl;
//		cin >> *No;
//	}
//
//	//�迭 �� ����
//	void Array();
//	{
//		//���� ���� ä���
//		srand(static_cast<unsigned int>(time(NULL)));
//		int* Deck = new int[10];
//
//		for (int i = 0; i < 10; ++i)
//		{
//			Deck[i] = (rand() % 100)-50;						//Deck�迭�� 0~51 ������ ���� 13���� ������ ����Ͽ� ���� 1�� ���� �ֱ�
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
//	//���ϱ�
//	void Sum();
//	{
//		for (int i = 0; i <= 9; ++i)
//		{
//			SumAll += Number[i];
//		}
//	}
//	//�ջ�
//	cout << "���ڵ��� ����" << SumAll << endl;
//	return 0;
//}




#include <iostream>



using namespace std;

int main()
{
	int* Data = new int[3];	//Data�� �迭���� heep�� ��ġ ��Ŵ(���ٷ� �ۼ�)

	Data[0] = 100;			//heep�� ��ġ�� Data�� 100 �Է� 
	Data[1] = 50;

	cout << Data[0];

	delete[] Data;			//heep�� Data��ġ ����
	Data = nullptr;			//Data�� �ڵ�޸� ���� ���
	return 0;
}