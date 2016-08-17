/*
 * quick_sort.c
 *
 *  Created on: Aug 10, 2016
 *      Author: wenjian
 */

/**
 * quick sort
 * unstable
 * time: worst, O(n^2), average, O(nlogn); best, O(nlogn)
 * auxiliary:O(nlogn)?why?
 */
#include"several_algs.h"
static int partition(int ori_array[], int l, int r){
	int pivot = ori_array[r];
	int i = l;
	int j = l;
	int count=0;
	for(j=l; j<r; j++){
		if(ori_array[j] < pivot){
			swap(&ori_array[j], &ori_array[i]);//if the elem less than pivot, swap it to i-th position
			i++; //increase the i-th position

		}
	}
	swap(&ori_array[i], &ori_array[r]); //pos the pivot to the right position
	return i;
}

int quick_sort(int ori_array[], int l, int r){
	if(l < r){
		int pos = partition(ori_array, l, r); //find the pivot position, and divide the array

		int ret1 = quick_sort(ori_array, l, pos-1);//recursion the left part of array
		int ret2 = quick_sort(ori_array, pos+1, r);//recursion the right part of array
	}
	return OK;
}
