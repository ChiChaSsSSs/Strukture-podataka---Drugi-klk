#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt* g = new GraphAsListsInt();
	g->insertNode(6);
	g->insertNode(5);
	g->insertNode(4);
	g->insertNode(3);
	g->insertNode(2);
	g->insertNode(1);
	g->insertEdge(1, 2);
	g->insertEdge(1, 3);
	g->insertEdge(2, 1);
	g->insertEdge(2, 3);
	g->insertEdge(2, 4);
	g->insertEdge(2, 5);
	g->insertEdge(2, 6);
	g->insertEdge(3, 1);
	g->insertEdge(3, 2);
	g->insertEdge(3, 6);
	g->insertEdge(4, 2);
	g->insertEdge(4, 6);
	g->insertEdge(5, 2);
	g->insertEdge(6, 2);
	g->insertEdge(6, 3);
	g->insertEdge(6, 4);
	g->print();
	if (g->canReach(5, 4, 3))
		cout << "Takav put postoji!" << endl;
	else
		cout << "Takav put ne postoji!" << endl;
}

