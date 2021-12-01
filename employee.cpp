#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

Employee::Employee(string data) : FIO(data)
{
}
Employee::~Employee()
{
}

string Employee::getEmployeeFio()
{
	return FIO;
}

int main() {
	Employee secretary1("Mihail");
	Employee accountant1("Vladimir");
	string nameSecr(secretary1.getEmployeeFio());
	string nameAcc(accountant1.getEmployeeFio());


	cout << nameSecr << endl;
	cout << nameAcc << endl;
	return 0;
};
