#include "binarytree.h"

void implementTree(vector<int> numbers)
{
	Tree t;
	//vector<int>input_arr = { 2,3,-1,-1,-1 };
	t.createTree(numbers);
    cout << endl;
	//1 2 3 -1 -1 4 5 -1 -1 6 -1 -1 7 -1 8 -1 -1
	//						   1
	//						  / \
	//						 2   7
	//						/ \   \
    //					   3   4   8
	//						  / \
	//						 5   6
	//
	t.preOrderTraversal();
	t.inOrderTraversal();
	t.postOrderTraversal();
	t.levelOrderTraversal();
	t.levelOrderTraversalLevelByLevel();
	t.heightUsingRecursion();
	t.heightUsingLevelOrder();
	t.diameterUsingThreeOption();
	t.diameterUsingHeight();
}

int main()
{
	std::vector<int> numbers;
	int number;
	while (std::cin >> number) {
	    numbers.push_back(number);
	}
	implementTree(numbers);
	return 0;
}