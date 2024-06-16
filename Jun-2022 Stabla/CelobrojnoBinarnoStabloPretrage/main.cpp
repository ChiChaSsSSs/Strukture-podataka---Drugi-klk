#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15);
	stablo->insert(10);
	stablo->insert(7);
	stablo->insert(5);
	stablo->insert(12);
	stablo->insert(13);
	stablo->insert(25);
	stablo->insert(23);
	stablo->insert(27);
	if (stablo->isPerfect())
		cout << "Perfektno balansirano!" << endl;
	else
		cout << "Nije perfektno balansirano!" << endl;
}
