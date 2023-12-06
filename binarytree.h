#pragma once
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int val);	
};

class Tree
{
	node* root;
public:
	Tree();
	void createTree(vector<int>);//definition in creation_BT.cpp
	void preOrderTraversal();
	void inOrderTraversal();
	void postOrderTraversal();
	void levelOrderTraversal();
	void levelOrderTraversalLevelByLevel();
	void heightUsingRecursion();
	void heightUsingLevelOrder();
	void diameterUsingHeight();
	void diameterUsingThreeOption();

	node* createTree_helper(node* root,vector<int>&,int&);
	void preOrderTraversal_Helper(node* root);
	void inOrderTraversal_Helper(node* root);
	void postOrderTraversal_Helper(node* root);
	void levelOrderTraversal_Helper(node* root);
	void levelOrderTraversalLevelByLevel_Helper(node* root);
	int heightUsingRecursion_helper(node* root);
	int heightUsingLevelOrder_helper(node* root);
	int diameterUsingHeight_helper(node* root, int& diameter);
	int diameterUsingThreeOption_helper(node* root);
};