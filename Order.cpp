#include <iostream>
#include <string>
#include "Order.h"
using namespace std;

Order::Order(int Number):Numb(Number)
{
}

int Order::getNumb() {
	return Numb;
}; // Ворует номер заказа

string Order::getClientFIO()
{
	return ClientFIO;
}; // ворует ФИО клиента

string Order::getDeceasedFIO() {
	return DeceasedFIO;
}; // ворует ФИО умершего

string Order::getBurialType() {
	return BurialType;
}; // ворует способ захоронения

string Order::getDescription() {
	return Description;
}; // ворует дополнительные сведения для заказа 

int Order::getPrice() {
	return Price;
}; // ворует цену на услугу

int Order::getIncome() {
	return Income;
}; // ворует доход от услуги

int Order::getProfit() {
	return Profit;
}; // ворует прибыль бюро от заказа

Order::~Order() {
};


int main2() {
	Order Test1(1);
	Order Test2(2);
	int FirstNumb(Test1.getNumb());
	int SecondNumb(Test2.getNumb());
	cout << FirstNumb << endl;
	cout << SecondNumb << endl;
	getchar;
	return 0;
};
