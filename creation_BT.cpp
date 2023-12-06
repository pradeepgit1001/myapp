#include "binarytree.h"

node* Tree::createTree_helper(node *root, vector<int> &input_arr, int &index)
{
	// base case
	if (index >= input_arr.size())
	{
		return NULL;
	}
	int val = input_arr[index];

	if (input_arr[index] == -1)
	{
		return NULL;
	}
	// root node created
	root = new node(val);

	// creating the left of the root node
	// cout << "enter the left node value of: " << root->data << endl;
	root->left = createTree_helper(root->left, input_arr, ++index);

	// creating the right of the root node
	// cout << "enter the right node value of: " << root->data << endl;
	root->right = createTree_helper(root->right, input_arr, ++index);

	return root;
}