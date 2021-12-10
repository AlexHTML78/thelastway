#include <iostream>
#include <string>
#include "Order.h"

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
	cin.ignore(80, '\n'); //����� ������������ �������� � ������ ����������
	return ch;
}



///////////����� ������ OrderInputScreen//////////////////
void OrderInputScreen::setOrder(BookKeeper &name, int i) // �������� ������ � ������
{
	Order* ptrOrder = new Order(i); // ������� �����

	ptrOrder->ClientFIO = name.setClientFIO(); 
	ptrOrder->DeceasedFIO = name.setDeceasedFIO();
	ptrOrder->BurialType =  name.setBurialType();
	ptrOrder->Description = name.setDescription();
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


void OrderList::display() // ����� ������ �������
{
if (setPtrsOrd.empty()) // ���� ������ ������� ����
cout << "***��� �������***\n" << endl; // ������� ������, ��� �� ����)
else
{
iter = setPtrsOrd.begin();
cout << "#" << "    " << "FIO DECEASED" << endl; // ��������� �������
while (iter != setPtrsOrd.end()) // ������������� ������ ���� �������
{

cout << (*iter)->getNumb() << (*iter)->getDeceasedFIO() << "   " << (*iter)->getProfit() << endl; //���������� ����� ������
*iter++;
}
}
}
//---------------------------------------------------------



int main() {
	setlocale(LC_ALL, "rus");

	// ��� ��� ������������ � main.cpp
	BookKeeper bookKeeper1;

	OrderList* ptrOrderList;
	ptrOrderList = new OrderList;
	OrderInputScreen* ptrOrderInputScreen;
	for (int i = 0;i < 3;i++) {
		ptrOrderInputScreen =
		new OrderInputScreen(ptrOrderList);
		ptrOrderInputScreen->setOrder(bookKeeper1, i);
		cin.ignore(); // ���������� ������� ���������� �����
		delete ptrOrderInputScreen;
	}
	ptrOrderList->display();


	return 0;

};


