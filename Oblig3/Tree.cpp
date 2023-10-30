#include "Tree.h"

Tree::Tree(int data) {
	nodeNumber = 0;
	nodeData = data;
	nodeCount += 1;
	nodeChildren = {};
}

int Tree::TreeSize() {
	return nodeCount;
}

int Tree::TreeDepth() {

}

bool Tree::isTreeEmpty() {
	if (nodeCount == 0)
		return true;
	else
		return false;
}

bool Tree::isTreeNodeRoot(int nodeNumber) {
	if (nodeNumber == 0)
		return true;
	else
		return false;
}

bool Tree::isTreeNodeLeaf(int nodeNumber) {

}

void Tree::TreeRandomInsert(int data) {
	nodeCount += 1;

}

void Tree::TreeInsert(int nodeData, int parent) {
	nodeCount += 1;

}

void Tree::TreeNodeDelete(int nodeNumber) {
	nodeCount -= 1;

}

void Tree::TreeTraversal() {

}