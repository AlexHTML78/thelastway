#include <iostream>
#include <string>
#include "Order.h"
using namespace std;

Order::Order(int Number):Numb(Number)
{
}

int Order::getNumb() {
	return Numb;
}; // ¬орует номер заказа

string Order::getClientFIO()
{
	return ClientFIO;
}; // ворует ‘»ќ клиента

string Order::getDeceasedFIO() {
	return DeceasedFIO;
}; // ворует ‘»ќ умершего

string Order::getBurialType() {
	return BurialType;
}; // ворует способ захоронени€

string Order::getDescription() {
	return Description;
}; // ворует дополнительные сведени€ дл€ заказа 

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


void getaLine(string& inStr) // получение строки текста
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); //число пропускаемых символов и символ разделени€
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() // получение символа
{
	char ch = cin.get();
	cin.ignore(80, '\n'); //число пропускаемых символов и символ разделени€
	return ch;
}



///////////метод класса OrderInputScreen//////////////////
void OrderInputScreen::setOrder() // добавить данные о заказе
{
cout << "¬ведите номер заказа : " << endl;
cin >> OrdNumb;
cin.ignore(80, '\n');
Order* ptrOrder = new Order(OrdNumb); // создать заказ
ptrOrderList->insertOrder(ptrOrder); // занести в список заказов
}
//---------------------------------------------------------
////////////////методы класса OrderList///////////////////
OrderList::~OrderList() // деструктор
{
while (!setPtrsOrd.empty()) // удаление всех заказов
{ // удаление указателей из контейнера
iter = setPtrsOrd.begin();
delete *iter;
setPtrsOrd.erase(iter);
}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
setPtrsOrd.push_back(ptrT); // вставка нового заказа в список
}
//---------------------------------------------------------


void OrderList::display() // вывод списка заказов
{
if (setPtrsOrd.empty()) // если список заказов пуст
cout << "***Ќет «аказов***\n" << endl; // выводим запись, что он пуст)
else
{
	cout << "Ќомер \n";
iter = setPtrsOrd.begin();
while (iter != setPtrsOrd.end()) // распечатываем всех заказов
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
	cout << "¬ведите кол-во заказов " << endl;
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
