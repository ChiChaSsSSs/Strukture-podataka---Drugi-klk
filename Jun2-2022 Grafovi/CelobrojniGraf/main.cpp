#include <iostream>
using namespace std;

#include "GraphInt.h"

int main(int argc, char* argv[]) 
{
	GraphAsListsInt* g = new GraphAsListsInt();
	g->insertNode(5);
	g->insertNode(4);
	g->insertNode(3);
	g->insertNode(2);
	g->insertNode(1);
	g->insertEdge(1, 2);
	g->insertEdge(2, 4);
	g->insertEdge(3, 1);
	g->insertEdge(3, 2);
	g->insertEdge(4, 1);
	g->insertEdge(5, 2);
	g->insertEdge(5, 4);
	if (g->isCyclic())
		cout << "Graf ima cikluse!\n";
	else
		cout << "Graf nema cikluse!\n";
}

