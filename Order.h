#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
#include <list>
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

class OrderList
{
private:
	// ���������� ��������� �� �����
	list <Order*> setPtrsOrd; // ��������� �� ����� �����
	list <Order*>::iterator iter; //��������
public:
	~OrderList(); // ���������� (�������� ������)
	void insertOrder(Order*); // �������� ����� � ������
	int getNumb( string ); // ���������� ����� 
	void display(); // ����� ������ �������
};

class OrderInputScreen
{
private:
	OrderList* ptrOrderList;
	string tName;
	int OrdNumb;
public:
	OrderInputScreen(OrderList* ptrTL) : ptrOrderList(ptrTL)
	{
		/* ��� ����� */
	}
	void setOrder(); // �������� ������ � ������
};

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