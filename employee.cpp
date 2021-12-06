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

void BookKeeper::setClientFIO() {// добавить данные о жильце
	cout << "Введите ФИО клиента (Павлов Павел Павлович): " << endl;
	string clientFIO;
	getline(cin, clientFIO);
	//Client* ptrClient = new Client(clientFIO); // создать клиента
	//ptrTenantList->insertTenant(ptrTenant);
}

void BookKeeper::setDeceasedFIO() {
	cout << "Введите ФИО умершего (Павлов Павел Павлович): " << endl;
	string deceasedFIO;
	getline(cin, deceasedFIO);
}


void BookKeeper::setBurialType() {
	int selectedType;

	cout << "Выберите тип услуги: " << endl
		 <<	"(1) Захоронение в гробу" << endl
		 << "(2) Кремация" << endl;
	cin >> selectedType;
	switch (selectedType)
	{
	case 1: {
		string BurialType("Захоронение в гробу");
		cout << "grob" << endl;
		break;
	}
		
	case 2: {
		string BurialType("Кремация");
		cout << "vaza" << endl;
		break;
	}
	default: {
		string BurialType("Захоронение в гробу");
		cout << "grob" << endl;
		break;
	}
		
	}

}


void BookKeeper::setDescription() {
	// if/else -> order.descr = "..."
}



void BookKeeper::setPrice() {
	cout << "Введите цену на услуги: " << endl;
	int price;
	cin >> price;
	//order.price = price;
}

void BookKeeper::setIncome() {
	cout << "Введите доход с оказания услуг: " << endl;
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
	cout << "Введите Ваше ФИО: " << endl;
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
