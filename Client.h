#ifndef __Client_H__
#define __Client_H__
#include <iostream>
#include <string>
using namespace std;

//фио клиента, номер заказа
class Client {
protected:
	int Numb; // Номер заказа
	string ClientFIO; // ФИО клиента
public:
	int getNumb(); // Получает номер заказа
	string getClientFIO(); // Получает ФИО клиента
	Client(string ClientFIO);
	~Client();

};

#endif // __Client_H__