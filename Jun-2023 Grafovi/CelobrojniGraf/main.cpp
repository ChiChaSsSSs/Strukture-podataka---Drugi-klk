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
	g->insertEdge(1, 2);
	g->insertEdge(1, 3);
	g->insertEdge(2, 1);
	g->insertEdge(2, 4);
	g->insertEdge(3, 1);
	g->insertEdge(3, 4);
	g->insertEdge(4, 2);
	g->insertEdge(4, 3);
	g->insertEdge(5, 7);
	g->insertEdge(6, 7);
	g->insertEdge(7, 5);
	g->insertEdge(7, 6);
	g->insertEdge(8, 9);
	g->insertEdge(9, 8);
	g->print();
	cout << endl;
	g->connectMinAndMax();
	g->print();
}

