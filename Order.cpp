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
