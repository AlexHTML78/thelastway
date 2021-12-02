#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
using namespace std;
//��������� ������ �����.
class Order {
protected:
	int Numb; // ����� ������
	string ClientFIO; //  ��� �������
	string DeceasedFIO; //  ��� ��������
	string BurialType; //  ������ �����������
	string Description; //  �������������� �������� ��� ������ 
	int Price; //  ���� �� ������
	int Income; //  ����� �� ������
	int Profit; //������� ���� �� ������
public:
	int getNumb(); // ������ ����� ������
	string getClientFIO(); // ������ ��� �������
	string getDeceasedFIO(); // ������ ��� ��������
	string getBurialType(); // ������ ������ �����������
	string getDescription(); // ������ �������������� �������� ��� ������ 
	int getPrice(); // ������ ���� �� ������
	int getIncome(); // ������ ����� �� ������
	int getProfit(); // ������ ������� ���� �� ������
	Order(int Numb);
	~Order();

};


#endif // __ORDER_H__