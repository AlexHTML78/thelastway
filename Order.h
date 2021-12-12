#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
#include <list>
#include "employee.h" //после создания main.cpp проверить, возможно в этой строчке нет необходимости

using namespace std;
//Интерфейс класса Заказ.
class Order {
protected:
	int Numb; // Номер заказа
public:
	string ClientFIO; //  ФИО клиента
	string DeceasedFIO; //  ФИО умершего
	string BurialType; //  способ захоронения
	string Description; //  дополнительные сведения для заказа 
	int Price; //  цена на услугу
	int Income; //  доход от услуги
	int Profit; //прибыль бюро от заказа
	int getNumb(); // Ворует номер заказа
	string getClientFIO(); // ворует ФИО клиента
	string getDeceasedFIO(); // ворует ФИО умершего
	string getBurialType(); // ворует способ захоронения
	string getDescription(); // ворует дополнительные сведения для заказа 
	int getPrice(); // ворует цену на услугу
	int getIncome(); // ворует доход от услуги
	int getProfit(); // ворует прибыль бюро от заказа
	Order(int Numb);
	~Order();

};

class OrderList
{
public:
	// установить указатели на заказ
	list <Order*> setPtrsOrd; // указатели на класс заказ
	list <Order*>::iterator iter; //итератор
public:
	~OrderList(); // деструктор (удаление заказа)
	void insertOrder(Order*); // добавить заказ в список
	//int getNumb(); // возвращает номер 
	void display(string); // вывод списка заказов
};

class OrderInputScreen
{
private:
	
	string tName;
	int OrdNumb;
public:
	OrderInputScreen(OrderList* ptrTL) : ptrOrderList(ptrTL) {};
	void setOrder(BookKeeper &name,int); // добавить данные о заказе
	OrderList* ptrOrderList;
};


// удалить
class UserInterface
{
private:
	OrderList* ptrOrderList;
	OrderInputScreen* ptrOrderInputScreen;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact();
};

#endif // __ORDER_H__