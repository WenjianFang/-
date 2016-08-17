/*
 * selection_sort.c
 *
 *  Created on: Aug 10, 2016
 *      Author: wenjian
 */

/**
 * selection sort
 * stable
 * time: worst, O(n^2); average, O(n^2); best, O(n^2)
 * auxiliary: O(1)
 */
#include"several_algs.h"
int selection_sort(int ori_array[], int n){
	int i=0;
	int j=0;
	int lowindex=0;
	for(i=0; i<n; i++){//find the i-th minimum number
		lowindex=i;//assume the minimum number is on i
		for(j=i+1; j<n; j++){//from i+1 --> n to find the position of minimum number
			if(ori_array[j] < ori_array[lowindex])
				lowindex = j;//get the position
		}
		swap(&ori_array[i], &ori_array[lowindex]); //swap
	}
	//print("selection_sort", ori_array, n);
	return OK;
}
