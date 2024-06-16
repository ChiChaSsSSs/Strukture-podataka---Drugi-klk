#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt* g = new GraphAsListsInt();
	g->insertNode(10);
	g->insertNode(9);
	g->insertNode(8);
	g->insertNode(7);
	g->insertNode(6);
	g->insertNode(5);
	g->insertNode(4);
	g->insertNode(3);
	g->insertNode(2);
	g->insertNode(1);
	g->insertEdge(5, 8);
	g->insertEdge(5, 9);
	g->insertEdge(7, 8);
	g->insertEdge(7, 9);
	g->insertEdge(2, 4);
	g->insertEdge(4, 6);
	g->insertEdge(1, 3);
	cout << "Broj disjunktnih podgrafova koji ispunjavaju uslov je: " << g->subgraphCount(9) << endl;
}

