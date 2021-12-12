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
	cout << "Введите Ваше ФИО: " << endl;
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

string BookKeeper::setClientFIO() {// добавить данные о жильце
	cout << "Введите ФИО клиента (Павлов Павел Павлович): " << endl;
	string clientFIO;
	getline(cin, clientFIO);
	return clientFIO;
	//Client* ptrClient = new Client(clientFIO); // создать клиента
	//ptrTenantList->insertTenant(ptrTenant);
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
	string description;
	cout << "Введите подробности заказа: " << endl;
	getline(cin, description);
	cin.ignore(0, '\n'); //число пропускаемых символов и символ разделения
	return description;
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


void Accountant::getOrdersRecord(OrderList &Orders)  // выводит таблицу-отчет по заказам
	{ 
	string Type = "Orders";
	Orders.display(Type);
	}


// Дисплей: объявление и определение, принимает функцию
// В реализации метода у бухгалтера вызывать display с нужными аргументами
// В аргументы : кол - во клиентов и т.д













int main12() {
//int bookKeeperFunc() {
	// реализация интерфейся пойдет в main.cpp
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
