#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

Employee::Employee(string data) : FIO(data)
{
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

void BookKeeper::setClientFIO() {// �������� ������ � ������
	cout << "������� ��� ������� (������ ����� ��������): " << endl;
	string clientFIO;
	getline(cin, clientFIO);
	//Client* ptrClient = new Client(clientFIO); // ������� �������
	//ptrTenantList->insertTenant(ptrTenant);
}

void BookKeeper::setDeceasedFIO() {
	cout << "������� ��� �������� (������ ����� ��������): " << endl;
	string deceasedFIO;
	getline(cin, deceasedFIO);
}


void BookKeeper::setBurialType() {
	int selectedType;

	cout << "�������� ��� ������: " << endl
		 <<	"(1) ����������� � �����" << endl
		 << "(2) ��������" << endl;
	cin >> selectedType;
	switch (selectedType)
	{
	case 1: {
		string BurialType("����������� � �����");
		cout << "grob" << endl;
		break;
	}
		
	case 2: {
		string BurialType("��������");
		cout << "vaza" << endl;
		break;
	}
	default: {
		string BurialType("����������� � �����");
		cout << "grob" << endl;
		break;
	}
		
	}

}


void BookKeeper::setDescription() {
	// if/else -> order.descr = "..."
}



void BookKeeper::setPrice() {
	cout << "������� ���� �� ������: " << endl;
	int price;
	cin >> price;
	//order.price = price;
}

void BookKeeper::setIncome() {
	cout << "������� ����� � �������� �����: " << endl;
	int income;
	cin >> income;
	//order.income = income;
}

void BookKeeper::setProfit() {
	
	//order.profit = order.income - order.price;
}

//int main() {
int bookKeeperFunc() {
	setlocale(LC_ALL, "rus");

	string secrName;
	cout << "������� ���� ���: " << endl;
	getline(cin, secrName);
	BookKeeper bookKeeper1(secrName);

	bookKeeper1.setClientFIO();
	bookKeeper1.setDeceasedFIO();
	bookKeeper1.setBurialType();
	bookKeeper1.setDescription();
	bookKeeper1.setPrice();
	bookKeeper1.setIncome();
	bookKeeper1.setProfit();
	return 0;
};
