#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
using namespace std;
//Интерфейс класса Заказ.
class Order {
protected:
	int Numb; // Номер заказа
	string ClientFIO; //  ФИО клиента
	string DeceasedFIO; //  ФИО умершего
	string BurialType; //  способ захоронения
	string Description; //  дополнительные сведения для заказа 
	int Price; //  цена на услугу
	int Income; //  доход от услуги
	int Profit; //прибыль бюро от заказа
public:
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


#endif // __ORDER_H__