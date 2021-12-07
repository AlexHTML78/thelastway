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
void OrderInputScreen::setOrder() // �������� ������ � ������
{
cout << "������� ����� ������ : " << endl;
cin >> OrdNumb;
cin.ignore(80, '\n');
Order* ptrOrder = new Order(OrdNumb); // ������� �����
ptrOrderList->insertOrder(ptrOrder); // ������� � ������ �������
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
	cout << "����� \n";
iter = setPtrsOrd.begin();
while (iter != setPtrsOrd.end()) // ������������� ���� �������
{
cout << (*iter)->getNumb()  << endl;
*iter++;
}
}
}
//---------------------------------------------------------



int main() {
	setlocale(LC_ALL, "rus");
	int Komnati;
	cout << "������� ���-�� ������� " << endl;
	cin >> Komnati;
	OrderList* ptrOrderList;
	ptrOrderList = new OrderList;
	OrderInputScreen* ptrOrderInputScreen;
	for (int i = 0;i < Komnati;i++) {
		ptrOrderInputScreen =
		new OrderInputScreen(ptrOrderList);
		ptrOrderInputScreen->setOrder();
		delete ptrOrderInputScreen;
	}
	ptrOrderList->display();
	return 0;
};
