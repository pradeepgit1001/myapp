#include "binarytree.h"

node::node(int val)
{
	this->data = val;
	this->left = NULL;
	this->right = NULL;
}

Tree::Tree()
{
	root = NULL;
}

void Tree::createTree(vector<int>input_arr)
{
	int index = 0;
	root = createTree_helper(root, input_arr,index);
}

void Tree::preOrderTraversal()
{
	cout << "preOrderTraversal" << endl;
	preOrderTraversal_Helper(root);
	cout << endl;
}

void Tree::inOrderTraversal()
{
	cout << "inOrderTraversal" << endl;
	inOrderTraversal_Helper(root);
	cout << endl;
}

void Tree::postOrderTraversal()
{
	cout << "postOrderTraversal" << endl;
	postOrderTraversal_Helper(root);
	cout << endl;
}

void Tree::levelOrderTraversal()
{
	cout << "levelOrderTraversal" << endl;
	levelOrderTraversal_Helper(root);
	cout << endl;
}

void Tree::levelOrderTraversalLevelByLevel()
{
	cout << "levelOrderTraversalLevelByLevel" << endl;
	levelOrderTraversalLevelByLevel_Helper(root);
	cout << endl;
}

void Tree::heightUsingRecursion()
{
	cout << "heightUsingRecursion" << endl;
	cout << heightUsingRecursion_helper(root);
	cout << endl;
}

void Tree::heightUsingLevelOrder()
{
	cout << "heightUsingLevelOrder" << endl;
	cout << heightUsingLevelOrder_helper(root);
	cout << endl;
}

void Tree::diameterUsingHeight()
{
	cout << "diameterUsingHeight" << endl;
	int diameter = 0;
	int height = diameterUsingHeight_helper(root, diameter);
	cout << diameter;
	cout << endl;
}

void Tree::diameterUsingThreeOption()
{
	cout << "diameterUsingThreeOption" << endl;
	cout << diameterUsingThreeOption_helper(root);
	cout << endl;
}