#ifndef __Client_H__
#define __Client_H__
#include <iostream>
#include <string>
using namespace std;

//��� �������, ����� ������
class Client {
protected:
	int Numb; // ����� ������
	string ClientFIO; // ��� �������
public:
	int getNumb(); // �������� ����� ������
	string getClientFIO(); // �������� ��� �������
	Client(string ClietnFIO);
	~Client();

};

#endif // __Client_H__