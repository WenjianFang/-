/*
 * link_list.h
 *
 *  Created on: Aug 14, 2016
 *      Author: wenjian
 */

#ifndef LINK_LIST_H_
#define LINK_LIST_H_

/*
 * define the link list node;
 * data and next pointer
 */
struct LNode{
	int data;
	struct LNode* next;
};

struct DLNode{
	int data;
	struct DLNode* pre;
	struct DLNode* next;
};
struct LNode* create_link_list(int array[], int n);
#endif /* LINK_LIST_H_ */
