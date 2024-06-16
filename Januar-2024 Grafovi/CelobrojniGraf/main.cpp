#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt* g = new GraphAsListsInt();
	g->insertNode(14);
	g->insertNode(13);
	g->insertNode(12);
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

	g->insertEdge(1, 3);
	g->insertEdge(1, 7);
	g->insertEdge(2, 10);
	g->insertEdge(3, 1);
	g->insertEdge(3, 4);
	g->insertEdge(3, 9);
	g->insertEdge(4, 3);
	g->insertEdge(4, 6);
	g->insertEdge(5, 8);
	g->insertEdge(6, 4);
	g->insertEdge(6, 7);
	g->insertEdge(6, 8);
	g->insertEdge(6, 10);
	g->insertEdge(7, 1);
	g->insertEdge(7, 6);
	g->insertEdge(8, 5);
	g->insertEdge(8, 6);
	g->insertEdge(9, 3);
	g->insertEdge(9, 10);
	g->insertEdge(10, 2);
	g->insertEdge(10, 6);
	g->insertEdge(10, 9);
	g->insertEdge(10, 12);
	g->insertEdge(12, 10);
	g->insertEdge(12, 13);
	g->insertEdge(13, 12);
	if (g->arePathsPossible(g->findNode(1), g->findNode(8), g->findNode(2), g->findNode(4)))
		cout << endl << "Postoje putevi!" << endl;
	else
		cout << endl << "Ne postoje putevi!" << endl;
}

