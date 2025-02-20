/*
 * insert_sort.c
 *
 *  Created on: Aug 10, 2016
 *      Author: wenjian
 */
/**
 * insert sort
 * stable
 * time: worst, O(n^2); average, O(n^2); best, O(n)
 * auxiliary space: O(1)
 */

#include"several_algs.h"

int insert_sort(int ori_array[], int n){
	int i = 0;
	int j = 0;
	for(i=1; i<n; i++){ //the i-th card
		for(j=i; j>0; j--){//start from i --> 0
			if(ori_array[j] < ori_array[j-1])
				swap(&ori_array[j], &ori_array[j-1]);//if less than front, swap!
			else break; //because ori_array[0]...ori_array[j-2] all less than ori_array[j-1]
		}
	}
	//print("insert_sort", ori_array, n);
	return OK;
}
