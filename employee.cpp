#include <iostream>
#include <string>
#include "employee.h"
#include "Order.h"
using namespace std;


//-----------------------------------------------------------
// Здесь базовый класс Employee
Employee::Employee(string data) : FIO(data)
{
}

Employee::Employee()
{
	string name;
	cout << "Введите Ваше ФИО: " << endl;
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
// Здесь пошел секретарь
BookKeeper::~BookKeeper()
{
}

string BookKeeper::setClientFIO() {
	cout << "Введите ФИО клиента (Павлов Павел Павлович): " << endl;
	string clientFIO;
	cin.ignore(40, '\n');
	getline(cin, clientFIO);

	return clientFIO;
}

string BookKeeper::setDeceasedFIO() {
	cout << "Введите ФИО умершего (Павлов Павел Павлович): " << endl;
	string deceasedFIO;
	getline(cin, deceasedFIO);
	return deceasedFIO;
}


string BookKeeper::setBurialType() {
	int selectedType;
	string BurialType;
	cout << "Выберите тип услуги: " << endl
		 <<	"(1) Захоронение в гробу" << endl
		 << "(2) Кремация" << endl;
	cin >> selectedType;
	switch (selectedType)
	{
	case 1: {
		BurialType = "Захоронение в гробу";
		break;
	}
		
	case 2: {
		BurialType = "Кремация";
		break;
	}
	default: {
		BurialType = "Захоронение в гробу";
		break;
	}
		
	}
	return BurialType;
}


string BookKeeper::setDescription() {
	string descr;
	cout << "Введите подробности заказа: " << endl;
	//cin.ignore(40, '\n');
	getline(cin, descr);
	return descr;
}



string BookKeeper::setPrice() {
	cout << "Введите цену на услуги: " << endl;
	string price;
	cin >> price;
	return price;
}

string BookKeeper::setIncome() {
	cout << "Введите доход с оказания услуг: " << endl;
	string income;
	cin >> income;
	
	return income;
}

string BookKeeper::setProfit(int price, int income) {
	string profit = to_string(income - price);
	return profit;
}

//-----------------------------------------------------------
// Здесь пошел бухгалтер


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
















