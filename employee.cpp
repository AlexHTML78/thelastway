#include <iostream>
#include <string>
#include "employee.h"
#include "Order.h"
using namespace std;

Employee::Employee(string data) : FIO(data)
{
}

Employee::Employee()
{
	string name;
	cout << "������� ���� ���: " << endl;
	getline(cin, name);
	this->FIO = name;
}

Employee::~Employee()
{
}

string Employee::getEmployeeFio()
{
	return FIO;
}


BookKeeper::~BookKeeper()
{
}

string BookKeeper::setClientFIO() {// �������� ������ � ������
	cout << "������� ��� ������� (������ ����� ��������): " << endl;
	string clientFIO;
	getline(cin, clientFIO);
	return clientFIO;
	//Client* ptrClient = new Client(clientFIO); // ������� �������
	//ptrTenantList->insertTenant(ptrTenant);
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
	string description;
	cout << "������� ����������� ������: " << endl;
	getline(cin, description);
	cin.ignore(0, '\n'); //����� ������������ �������� � ������ ����������
	return description;
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


void Accountant::getOrdersRecord(OrderList &Orders)  // ������� �������-����� �� �������
	{ 
	string Type = "Orders";
	Orders.display(Type);
	}


// �������: ���������� � �����������, ��������� �������
// � ���������� ������ � ���������� �������� display � ������� �����������
// � ��������� : ��� - �� �������� � �.�













int main12() {
//int bookKeeperFunc() {
	// ���������� ���������� ������ � main.cpp
	setlocale(LC_ALL, "rus");

	
	//BookKeeper bookKeeper1(secrName);
	while (true) {
		cout << "press q+enter to exit" << endl;
		int ch = cin.get();
		if (ch == 'q') {
			return 0;
		}
		else {
			//setOrder();

			
		}
	}
	
	return 0;
};
