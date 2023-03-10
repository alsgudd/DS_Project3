#ifndef _MATRIX_H_
#define _MATRIX_H_

#include "Graph.h"

class MatrixGraph : public Graph {
private:
	int** m_Mat;

public:
	MatrixGraph(bool type, int size);
	~MatrixGraph();

	void getIncomingEdges(int to, map<int, int>* m);
	void getDirAdjacentEdges(int vertex, map<int, int>* m);
	void getAdjacentEdges(int vertex, map<int, int>* m);
	void insertEdge(int from, int to, int weight);
	bool printGraph(ofstream& fout);
};

#endif