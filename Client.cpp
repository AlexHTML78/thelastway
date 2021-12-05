#include <iostream>
#include <string>
#include "Client.h"
using namespace std;

Client::Client(string FIO):ClientFIO(FIO)
{
}

string Client::getClientFIO() {
	return ClientFIO;
}; // Ворует номер заказа

Client::~Client() {
};


int main() {
	Client Anatoliy("Фёдорович");
	string Perviy(Anatoliy.getClientFIO);
	cout << Perviy << endl;
	getchar;
	return 0;
};
