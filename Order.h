#ifndef __Order_H__
#define __Order_H__
#include <iostream>
#include <string>
using namespace std;
//Èíòåðôåéñ êëàññà Çàêàç.
class Order {
protected:
	int Numb; // Íîìåð çàêàçà
	string ClientFIO; //  ÔÈÎ êëèåíòà
	string DeceasedFIO; //  ÔÈÎ óìåðøåãî
	string BurialType; //  ñïîñîá çàõîðîíåíèÿ
	string Description; //  äîïîëíèòåëüíûå ñâåäåíèÿ äëÿ çàêàçà 
	int Price; //  öåíà íà óñëóãó
	int Income; //  äîõîä îò óñëóãè
	int Profit; //ïðèáûëü áþðî îò çàêàçà
public:
	int getNumb(); // Âîðóåò íîìåð çàêàçà
	string getClientFIO(); // âîðóåò ÔÈÎ êëèåíòà
	string getDeceasedFIO(); // âîðóåò ÔÈÎ óìåðøåãî
	string getBurialType(); // âîðóåò ñïîñîá çàõîðîíåíèÿ
	string getDescription(); // âîðóåò äîïîëíèòåëüíûå ñâåäåíèÿ äëÿ çàêàçà 
	int getPrice(); // âîðóåò öåíó íà óñëóãó
	int getIncome(); // âîðóåò äîõîä îò óñëóãè
	int getProfit(); // âîðóåò ïðèáûëü áþðî îò çàêàçà
	Order(int Numb);
	~Order();

};


#endif // __ORDER_H__
