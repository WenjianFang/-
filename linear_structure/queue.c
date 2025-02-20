/*
 * queue.c
 *
 *  Created on: Aug 15, 2016
 *      Author: wenjian
 */

#include<stdlib.h>
#include"queue.h"
#include"stack.h"
/**
 * init a queue
 * data, queue_size and head&rail
 */
void init_queue(struct Queue* queue){
	queue->data = (int*)malloc(sizeof(int)*INIT_CAPACITY);/*malloc a new space*/
	queue->queue_size = INIT_CAPACITY;
	queue->head = 0;
	queue->rail = 0; /*the queue is empty, head==rail*/
}

/**
 * enqueue, and not consider the capacity overflow
 */
void enqueue(struct Queue* queue, int e){
//	if((queue->rail+1)%queue->queue_size == queue->head) increment();
	queue->data[queue->rail] = e; /*enqueue in the last*/
	queue->rail = (queue->rail+1)%queue->queue_size;/*move rail, NOTICE, cycle, so mod the queue_size*/
}

/**
 * dequeue, not consider the empty queue
 */
int dequeue(struct Queue* queue){
//	if(queue->head == queue->rail) return;
	int e = queue->data[queue->head];
	queue->head = (queue->head+1)%queue->queue_size;/*move head, NOTICE, cycyle, so mod the queue_size*/
	return e;
}
/**
 * peek the data, not move the element
 */
int queue_peek(struct Queue* queue){
//	if(queue->head == queue->rail) return;
	int e = queue->data[queue->head];
	return e;
}

/**
 * double stack implement queue
 * just init double stack, respectively
 */
void init_dsqueue(struct DSQueue* dsqueue){
	init_stack(&(dsqueue->s1));
	init_stack(&(dsqueue->s2));
}
/**
 * enqueue, push to the first stack
 */
void endsqueue(struct DSQueue* dsqueue, int e){
	push(&(dsqueue->s1),e);
}
/**
 * dequeue, if stack2 has elements, just pop
 * if not, pop from stack1 and push to stack2
 * finally, pop from stack2
 */
int dedsqueue(struct DSQueue* dsqueue){
	if((dsqueue->s2).top > -1){/*second stack has elements*/
		return pop(&(dsqueue->s2));
	}
	else{/*second stack has not elements, pop from s1 and push to s2*/
		while((dsqueue->s1).top > -1){/*pop from stack1 until it is empty*/
			int e = pop(&(dsqueue->s1));
			push(&(dsqueue->s2), e);/*push the element from stack1 to stack2*/
		}
		return pop(&(dsqueue->s2));/*finally also pop from stack2*/
	}
}
