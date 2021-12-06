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

	void setClientFIO(); // ������������� ��� �������
	void setDeceasedFIO(); // ������������� ��� ��������
	void setBurialType(); // ������������� ������ �����������
	void setDescription(); // ���������� �������������� �������� ��� ������ 
	void setPrice(); // ������������� ���� �� ������
	void setIncome(); // ������������� ����� �� ������
	void setProfit(); // ������� � ������������� ������� ���� �� ������
	~BookKeeper();
};


#endif // __EMPLOYEE_H__