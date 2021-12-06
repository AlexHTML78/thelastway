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

	void setClientFIO(); // устанавливает ФИО клиента
	void setDeceasedFIO(); // устанавливает ФИО умершего
	void setBurialType(); // устанавливает способ захоронения
	void setDescription(); // записывает дополнительные сведения для заказа 
	void setPrice(); // устанавливает цену на услугу
	void setIncome(); // устанавливает доход от услуги
	void setProfit(); // считает и устанавливает прибыль бюро от заказа
	~BookKeeper();
};


#endif // __EMPLOYEE_H__