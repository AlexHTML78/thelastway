#include <iostream>
#include <string>
#include "Order.h"
#include "employee.h"
using namespace std;

Order::Order(int Number):Numb(Number)
{
}

int Order::getNumb() {
	return Numb;
}; // ������ ����� ������

string Order::getClientFIO()
{
	return ClientFIO;
}; // ������ ��� �������

string Order::getDeceasedFIO() {
	return DeceasedFIO;
}; // ������ ��� ��������

string Order::getBurialType() {
	return BurialType;
}; // ������ ������ �����������

string Order::getDescription() {
	return Description;
}; // ������ �������������� �������� ��� ������ 

int Order::getPrice() {
	return Price;
}; // ������ ���� �� ������

int Order::getIncome() {
	return Income;
}; // ������ ����� �� ������

int Order::getProfit() {
	return Profit;
}; // ������ ������� ���� �� ������

Order::~Order() {
};


void getaLine(string& inStr) // ��������� ������ ������
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //����� ������������ �������� � ������ ����������
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() // ��������� �������
{
	char ch = cin.get();
	cin.ignore(80, '\n');
	return ch;
}



///////////����� ������ OrderInputScreen//////////////////
void OrderInputScreen::setOrder(BookKeeper &name, int i) // �������� ������ � ������
{
	Order* ptrOrder = new Order(i); // ������� �����

	ptrOrder->ClientFIO = name.setClientFIO(); 
	ptrOrder->DeceasedFIO = name.setDeceasedFIO();
	ptrOrder->Description = name.setDescription();
	ptrOrder->BurialType = name.setBurialType();
	ptrOrder->Price = stoi(name.setPrice());
	ptrOrder->Income = stoi(name.setIncome());
	ptrOrder->Profit = stoi(name.setProfit(ptrOrder->Price, ptrOrder->Income));
	ptrOrderList->insertOrder(ptrOrder);
}
//---------------------------------------------------------
////////////////������ ������ OrderList///////////////////
OrderList::~OrderList() // ����������
{
while (!setPtrsOrd.empty()) // �������� ���� �������
{ // �������� ���������� �� ����������
iter = setPtrsOrd.begin();
delete *iter;
setPtrsOrd.erase(iter);
}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
setPtrsOrd.push_back(ptrT); // ������� ������ ������ � ������
}
//---------------------------------------------------------


void OrderList::display(string Type) // ����� ������ �������
{
	if (Type == "Orders") 
	{
	if (setPtrsOrd.empty()) // ���� ������ ������� ����
		cout << "***��� �������***\n" << endl; // ������� ������, ��� �� ����)
	else
		{
		iter = setPtrsOrd.begin();
		cout << "�" << "\t" <<"������" << "\t\t" << "�������" << "\t\t" <<"�����������"<<"\t\t"<< "������ �����������" <<"\t"<<"���������"
			<< "\t" << "�����"<<"\t" << "�������" << endl; // ��������� �������
		while (iter != setPtrsOrd.end()) // ������������� ������ ���� �������
			{
			cout <<  (*iter)->getNumb() << " \t " << (*iter)->getClientFIO() <<  "\t\t" << (*iter)->getDeceasedFIO() <<  "\t" << (*iter)->getDescription() <<
				"\t\t"<< (*iter)->getBurialType()<<"\t"<< (*iter)->getPrice() <<"\t"<< (*iter)->getIncome()<<"\t"
				 << (*iter)->getProfit()<< endl; //���������� ����� ������ 
			*iter++;
			}
		}
	}
	if (Type == "Money")
	{
		if (setPtrsOrd.empty()) // ���� ������ ������� ����
			cout << "***��� ������***\n" << endl; // ������� ������, ��� �� ����)
		else
		{
			int Numbers=0,Prices=0,Incomes=0,Profits=0;
			Numbers = 0;
			iter = setPtrsOrd.begin();
			cout << "���-�� �������� � ����" << "\t" << "�������" << "\t" <<
			"�����" << "\t" << "�������" << "\t" << endl; // ��������� �������
			while (iter != setPtrsOrd.end()) // ������������� ������ ���� �������
			{
				Prices += (*iter)->getPrice();
				Incomes += (*iter)->getIncome();
				Profits += (*iter)->getProfit();
				Numbers++;
				*iter++;
			}
			cout << Numbers<<"\t\t\t"<<Prices << "\t" << Incomes << "\t" << Profits << "\t" << endl;
		}
	}
}
//---------------------------------------------------------






