#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
#include <list>
#include "employee.h"

using namespace std;
//��������� ������ �����.
class Order {
protected:
	int Numb; // ����� ������
public:
	string ClientFIO; //  ��� �������
	string DeceasedFIO; //  ��� ��������
	string BurialType; //  ������ �����������
	string Description; //  �������������� �������� ��� ������ 
	int Price; //  ���� �� ������
	int Income; //  ����� �� ������
	int Profit; //������� ���� �� ������

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

class OrderList
{
public:
	// ���������� ��������� �� �����
	list <Order*> setPtrsOrd; // ��������� �� ����� �����
	list <Order*>::iterator iter; //��������

	~OrderList(); // ���������� 
	void insertOrder(Order*); // �������� ����� � ������
	void display(string); // ����� ������ �������
};

class OrderInputScreen
{

public:
	OrderInputScreen(OrderList* ptrTL) : ptrOrderList(ptrTL) {};
	void setOrder(BookKeeper &name,int); // �������� ������ � ������
	OrderList* ptrOrderList; //��������� �� ������
};


#endif // __ORDER_H__