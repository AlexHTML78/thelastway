#include <iostream>
#include <string>
#include "Order.h"
#include "employee.h"

int main() {
	cout << "\t\t\t\t" << "���������� ���� \"���������� ��������\" " << endl;
	setlocale(LC_ALL, "rus");
	OrderList* ptrOrderList;
	ptrOrderList = new OrderList;
	string bookKeeperName;
	string accountantName;
	BookKeeper bookKeeper1("�������� ������� ����������");
	bookKeeperName = bookKeeper1.getEmployeeFio();
	Accountant Buhg("�������� ����� ���������");
	accountantName = Buhg.getEmployeeFio();
	while (true) {
		int ordersCount = 0;
		
		cout << "�������� ���� ���������:" << endl
			<< "(1)���������		(2)���������" << endl;
		char select;
		cin >> select;
		if (select == '1') {
			OrderInputScreen* ptrOrderInputScreen;
			while (true) {
				ptrOrderInputScreen =
					new OrderInputScreen(ptrOrderList);
				ptrOrderInputScreen->setOrder(bookKeeper1, ordersCount);
				cin.ignore(20, '\n');
				delete ptrOrderInputScreen;
				cout << "��� ���������� ����� ������ ������� q+Enter" << endl
					 << "��� ����������� ������ ������� {�����_������}+Enter" << endl;
				if (cin.get() == 'q') {
					break;
				}
				else
				{
					ordersCount++;
					continue;
				}
			}
		}
		if (select == '2') {
			cout << "�������� ��������:" << endl
				<< "(1)����� ������ �� ��������� �������" << endl
				<< "(2)����� ������ �� �������" << endl
				<< "q+Enter ����� ����������.." << endl;
			char selectedRecord;
			cin >> selectedRecord;
			switch (selectedRecord)
			{
			case '1': {
				Buhg.getMoneyRecord(*ptrOrderList);
				cout << "������ ������� ���������� " << bookKeeperName << endl
					<< "����� ��������� ����������� " << accountantName << endl;
				break;
			}
			case '2': {
				Buhg.getOrdersRecord(*ptrOrderList);
				cout << "������ ������� ���������� " << bookKeeperName << endl
					<< "����� ��������� ����������� " << accountantName << endl;
				break;
			}
				default:
					break;
			};

		}
		cout << "������� q+Enter ����� ��������� ������ ���������" << endl
			<< "��� ����������� ������ ������� {�����_������}+Enter" << endl;;
		char ch;
		cin >> ch;
		if (ch == 'q') {
			return 0;
		}
		else {
			cin.ignore(5, '\n');
			continue;
		}
	}

	return 0;
};


