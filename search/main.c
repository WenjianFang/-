/*
 * main.c
 *
 *  Created on: Aug 15, 2016
 *      Author: wenjian
 */
#include<stdlib.h>
#include<stdio.h>
#include"binary_search_tree.h"

int main(int argc, char* argv){
	int array[] = {2, 3, 8, 9, 10, 23, 34};
	int n = 7;
	int element = 23;
	int pos = binary_search(array, n, element);
	printf("the position of 23 is %d\n", pos);
	//struct BSTNode* root = create_bstree(array, n);

	//struct BSTNode* p = bstree_search(root, element);
	//printf("search element is %d\n", p->data);
	return 0;
}
