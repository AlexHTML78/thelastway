#include <iostream>
#include <string>
#include "Order.h"
#include "employee.h"

int main() {
	cout << "\t\t\t\t" << "Похоронное Бюро \"Деревянный Пиджачок\" " << endl;
	setlocale(LC_ALL, "rus");
	OrderList* ptrOrderList;
	ptrOrderList = new OrderList;
	string bookKeeperName;
	string accountantName;
	BookKeeper bookKeeper1("Васильев Дмитрий Викторович");
	bookKeeperName = bookKeeper1.getEmployeeFio();
	Accountant Buhg("Кузнецов Роман Андреевич");
	accountantName = Buhg.getEmployeeFio();
	while (true) {
		int ordersCount = 0;
		
		cout << "Выберите свою должность:" << endl
			<< "(1)Секретарь		(2)Бухгалтер" << endl;
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
				cout << "Для завершения ввода данных нажмите q+Enter" << endl
					 << "Для продолжения работы нажмите {любой_символ}+Enter" << endl;
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
			cout << "Выберите действие:" << endl
				<< "(1)Вывод отчета по денежному обороту" << endl
				<< "(2)Вывод отчета по заказам" << endl
				<< "q+Enter чтобы пропустить.." << endl;
			char selectedRecord;
			cin >> selectedRecord;
			switch (selectedRecord)
			{
			case '1': {
				Buhg.getMoneyRecord(*ptrOrderList);
				cout << "Данные внесены секретарем " << bookKeeperName << endl
					<< "Отчет составлен бухгалтером " << accountantName << endl;
				break;
			}
			case '2': {
				Buhg.getOrdersRecord(*ptrOrderList);
				cout << "Данные внесены секретарем " << bookKeeperName << endl
					<< "Отчет составлен бухгалтером " << accountantName << endl;
				break;
			}
				default:
					break;
			};

		}
		cout << "Нажмите q+Enter чтобы завершить работу программы" << endl
			<< "Для продолжения работы нажмите {любой_символ}+Enter" << endl;;
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


