#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <iostream>
#include <string>
using namespace std;


// ��������� ������ �������� (�������� ��� ������� ��������� � ���������
class Employee {

protected:
	string FIO; // ��� ���������
public:
	Employee(string FIO);
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
	string setClientFIO(); // ������������� ��� �������
	string setDeceasedFIO(); // ������������� ��� ��������
	string setBurialType(); // ������������� ������ �����������
	string setDescription(); // ���������� �������������� �������� ��� ������ 
	int setPrice(); // ������������� ���� �� ������
	int setIncometFIO(); // ������������� ����� �� ������
	int setProfit(); // ������� � ������������� ������� ���� �� ������
};


#endif // __EMPLOYEE_H__