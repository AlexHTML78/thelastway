#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
#include <string>
using namespace std;


// интерфейс класса Работник (родитель для классов Секретарь и Бухгалтер)
class Employee {

protected:
	string FIO; // фио работника
public:
	Employee(string FIO);
	Employee();
	~Employee();
	string getEmployeeFio(); // возвращает ФИО работника

};


// интерфейс класса Бухглатер
class Accountant : public Employee {
public:
    void getMoneyRecord(); // выводит таблицу-отчет по денежному обороту
	void getOrdersRecord(); // выводит таблицу-отчет по заказам
};


// интерфейс класса Секретарь
class BookKeeper : public Employee {
public:
	BookKeeper() : Employee() {};
	BookKeeper(string FIO) : Employee(FIO) {};

	string setClientFIO(); // устанавливает ФИО клиента
	string setDeceasedFIO(); // устанавливает ФИО умершего
	string setBurialType(); // устанавливает способ захоронения
	string setDescription(); // записывает дополнительные сведения для заказа 
	string setPrice(); // устанавливает цену на услугу
	string setIncome(); // устанавливает доход от услуги
	string setProfit(int price, int income); // считает и устанавливает прибыль бюро от заказа
	~BookKeeper();
};


#endif // __EMPLOYEE_H__