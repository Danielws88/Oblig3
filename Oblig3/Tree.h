#pragma once
#include <list>

class Tree
{
	int nodeNumber;
	int nodeData;
	list<int> nodeChildren;

	static int nodeCount {0};

public:
	Tree();
	Tree(int data);

	int TreeSize();
	int TreeDepth();
	bool isTreeEmpty();
	bool isTreeNodeRoot(int nodeNumber);
	bool isTreeNodeLeaf(int nodeNumber);

	void TreeRandomInsert(int nodeData);
	void TreeInsert(int nodeData, int parent);
	void TreeNodeDelete(int nodeNumber);

	void TreeTraversal();
};

