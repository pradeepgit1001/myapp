#include "binarytree.h"

void Tree::preOrderTraversal_Helper(node* root)//N L R
{
	if (root == NULL)
		return;

	//N
	cout << root->data << " ";

	//L
	preOrderTraversal_Helper(root->left);

	//R
	preOrderTraversal_Helper(root->right);
}

void Tree::inOrderTraversal_Helper(node* root)//L N R
{
	if (root == NULL)
		return;

	//L
	inOrderTraversal_Helper(root->left);

	//N
	cout << root->data << " ";

	//R
	inOrderTraversal_Helper(root->right);
}

void Tree::postOrderTraversal_Helper(node* root)//L R N
{
	if (root == NULL)
		return;

	//L
	postOrderTraversal_Helper(root->left);

	//R
	postOrderTraversal_Helper(root->right);

	//N
	cout << root->data << " ";
}

void Tree::levelOrderTraversal_Helper(node* root)
{
	queue<node*>q;
	q.push(root);

	while (!q.empty())
	{
		node* frontNode = q.front();
		q.pop();

		cout << frontNode->data << " ";

		//left node push
		if (frontNode->left != NULL)
		{
			q.push(frontNode->left);
		}

		//right node push
		if (frontNode->right != NULL)
		{
			q.push(frontNode->right);
		}
	}
}

void Tree::levelOrderTraversalLevelByLevel_Helper(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while (!q.empty())
	{
		node* frontNode = q.front();
		q.pop();

		if (frontNode == NULL)
		{
			cout << endl;
			if (!q.empty())
			{
				q.push(NULL);
			}
		}

		else
		{
			cout << frontNode->data << " ";

			//left node push
			if (frontNode->left != NULL)
			{
				q.push(frontNode->left);
			}

			//right node push
			if (frontNode->right != NULL)
			{
				q.push(frontNode->right);
			}
		}
	}
}

int Tree::heightUsingRecursion_helper(node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = heightUsingRecursion_helper(root->left);
	int rightHeight = heightUsingRecursion_helper(root->right);
	int height = max(leftHeight, rightHeight) + 1;
	return height;
}

int Tree::heightUsingLevelOrder_helper(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	int count = 1;//root is already pushed. start count with 1

	while (!q.empty())
	{
		node* frontNode = q.front();
		q.pop();

		if (frontNode == NULL)
		{
			//cout << endl;
			if (!q.empty())
			{
				q.push(NULL);
				count++; //whenever null is pushed, it completes on level or one depth
			}
		}

		else
		{
			//cout << frontNode->data << " ";

			//left node push
			if (frontNode->left != NULL)
			{
				q.push(frontNode->left);
			}

			//right node push
			if (frontNode->right != NULL)
			{
				q.push(frontNode->right);
			}
		}
	}
	return count;
}

int Tree::diameterUsingThreeOption_helper(node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int option1 = diameterUsingThreeOption_helper(root->left);
	int option2 = diameterUsingThreeOption_helper(root->right);
	int leftHeight = heightUsingRecursion_helper(root->left);
	int rightHeight = heightUsingRecursion_helper(root->right);
	int option3 = leftHeight + rightHeight;
	int diameter = max(option1, max(option2, option3));
	return diameter;	
}

int Tree::diameterUsingHeight_helper(node* root, int &diameter)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftHeight = diameterUsingHeight_helper(root->left,diameter);
	int rightHeight = diameterUsingHeight_helper(root->right,diameter);
	int currDiameter = leftHeight + rightHeight;
	diameter = max(currDiameter, diameter);
	int height = max(leftHeight, rightHeight) + 1;
	return height;
}
