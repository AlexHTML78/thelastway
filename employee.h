#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
#include <string>
using namespace std;


// ��������� ������ �������� (�������� ��� ������� ��������� � ���������)
class Employee {

protected:
	string FIO; // ��� ���������
public:
	Employee(string FIO);
	Employee();
	~Employee();
	string getEmployeeFio(); // ���������� ��� ���������

};


// ��������� ������ ���������
class Accountant : public Employee {
public:
    void getMoneyRecord(); // ������� �������-����� �� ��������� �������
	void getOrdersRecord(); // ������� �������-����� �� �������
};


// ��������� ������ ���������
class BookKeeper : public Employee {
public:
	BookKeeper() : Employee() {};
	BookKeeper(string FIO) : Employee(FIO) {};

	string setClientFIO(); // ������������� ��� �������
	string setDeceasedFIO(); // ������������� ��� ��������
	string setBurialType(); // ������������� ������ �����������
	string setDescription(); // ���������� �������������� �������� ��� ������ 
	string setPrice(); // ������������� ���� �� ������
	string setIncome(); // ������������� ����� �� ������
	string setProfit(int price, int income); // ������� � ������������� ������� ���� �� ������
	~BookKeeper();
};


#endif // __EMPLOYEE_H__