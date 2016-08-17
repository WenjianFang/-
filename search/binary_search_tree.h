/*
 * binary_search_tree.h
 *
 *  Created on: Aug 15, 2016
 *      Author: wenjian
 */

#ifndef BINARY_SEARCH_TREE_H_
#define BINARY_SEARCH_TREE_H_

/*the node of binary search tree*/
struct BSTNode{
	int data;
	struct BSTNode* lchild;
	struct BSTNode* rchild;
};
struct BSTNode* bstree_search(struct BSTNode* root, int element);
struct BSTNode* create_bstree(int array[], int n);
#endif /* BINARY_SEARCH_TREE_H_ */
