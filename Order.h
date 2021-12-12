#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
#include <list>
#include "employee.h" //����� �������� main.cpp ���������, �������� � ���� ������� ��� �������������

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
public:
	~OrderList(); // ���������� (�������� ������)
	void insertOrder(Order*); // �������� ����� � ������
	//int getNumb(); // ���������� ����� 
	void display(string); // ����� ������ �������
};

class OrderInputScreen
{
private:
	
	string tName;
	int OrdNumb;
public:
	OrderInputScreen(OrderList* ptrTL) : ptrOrderList(ptrTL) {};
	void setOrder(BookKeeper &name,int); // �������� ������ � ������
	OrderList* ptrOrderList;
};


// �������
class UserInterface
{
private:
	OrderList* ptrOrderList;
	OrderInputScreen* ptrOrderInputScreen;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact();
};

#endif // __ORDER_H__