#include "BSTreeInt.h"

void main()
{
	BSTreeInt* stablo = new BSTreeInt();
	stablo->insert(15);
	stablo->insert(7);
	stablo->insert(22);
	stablo->insert(13);
	stablo->insert(11);
	stablo->insert(9);
	stablo->insert(8);
	stablo->insert(12);
	stablo->insert(14);
	stablo->insert(18);
	cout << stablo->maxHeightDiff()->getKey();
	delete stablo;
}
