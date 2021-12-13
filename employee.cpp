#include <iostream>
#include <string>
#include "employee.h"
#include "Order.h"
using namespace std;


//-----------------------------------------------------------
// ����� ������� ����� Employee
Employee::Employee(string data) : FIO(data)
{
}

Employee::Employee()
{
	string name;
	cout << "������� ���� ���: " << endl;
	getline(cin, name);
	cin.ignore(20, '\n');
	this->FIO = name;
}

Employee::~Employee()
{
}

string Employee::getEmployeeFio()
{
	return FIO;
}



//-----------------------------------------------------------
// ����� ����� ���������
BookKeeper::~BookKeeper()
{
}

string BookKeeper::setClientFIO() {
	cout << "������� ��� ������� (������ ����� ��������): " << endl;
	string clientFIO;
	cin.ignore(40, '\n');
	getline(cin, clientFIO);

	return clientFIO;
}

string BookKeeper::setDeceasedFIO() {
	cout << "������� ��� �������� (������ ����� ��������): " << endl;
	string deceasedFIO;
	getline(cin, deceasedFIO);
	return deceasedFIO;
}


string BookKeeper::setBurialType() {
	int selectedType;
	string BurialType;
	cout << "�������� ��� ������: " << endl
		 <<	"(1) ����������� � �����" << endl
		 << "(2) ��������" << endl;
	cin >> selectedType;
	switch (selectedType)
	{
	case 1: {
		BurialType = "����������� � �����";
		break;
	}
		
	case 2: {
		BurialType = "��������";
		break;
	}
	default: {
		BurialType = "����������� � �����";
		break;
	}
		
	}
	return BurialType;
}


string BookKeeper::setDescription() {
	string descr;
	cout << "������� ����������� ������: " << endl;
	//cin.ignore(40, '\n');
	getline(cin, descr);
	return descr;
}



string BookKeeper::setPrice() {
	cout << "������� ���� �� ������: " << endl;
	string price;
	cin >> price;
	return price;
}

string BookKeeper::setIncome() {
	cout << "������� ����� � �������� �����: " << endl;
	string income;
	cin >> income;
	
	return income;
}

string BookKeeper::setProfit(int price, int income) {
	string profit = to_string(income - price);
	return profit;
}

//-----------------------------------------------------------
// ����� ����� ���������


Accountant::~Accountant()
{
}

void Accountant::getMoneyRecord(OrderList &Orders) { 
	string Type = "Money";
	Orders.display(Type);
}
void Accountant::getOrdersRecord(OrderList &Orders)  
	{ 
	string Type = "Orders";
	Orders.display(Type);
	}
















