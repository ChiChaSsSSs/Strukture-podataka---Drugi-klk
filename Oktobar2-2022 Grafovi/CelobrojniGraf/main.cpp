#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt* g = new GraphAsListsInt();
	g->insertNode(7);
	g->insertNode(6);
	g->insertNode(5);
	g->insertNode(4);
	g->insertNode(3);
	g->insertNode(2);
	g->insertNode(1);
	g->insertEdge(1, 2);
	g->insertEdge(2, 1);
	g->insertEdge(1, 3);
	g->insertEdge(3, 1);
	g->insertEdge(2, 3);
	g->insertEdge(3, 2);
	g->insertEdge(2, 5);
	g->insertEdge(5, 2);
	g->insertEdge(2, 6);
	g->insertEdge(6, 2);
	g->insertEdge(3, 4);
	g->insertEdge(4, 3);
	g->insertEdge(4, 5);
	g->insertEdge(5, 4);
	g->insertEdge(5, 8);
	g->insertEdge(8, 5);
	g->insertEdge(4, 7);
	g->insertEdge(7, 4);
	if (g->pathExists(g->findNode(1), g->findNode(7), g->findNode(2), g->findNode(6)))
		cout << "Put postoji!\n";
	else
		cout << "Put ne postoji!\n";
}

