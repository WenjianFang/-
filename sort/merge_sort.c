/*
 * merge_sort.c
 *
 *  Created on: Aug 11, 2016
 *      Author: wenjian
 */

/**
 * divide and conquer
 */
/**
 * merge_sort
 * stable
 * time: worst, O(nlogn); average, O(nlogn); best, O(nlogn)
 * auxiliary: O(n)
 */
#include"several_algs.h"

static void merge(int ori_array[], int tmp[], int left, int middle, int right){
	int i=left;
	int j=middle+1;
	int k=left;
	while((i <= middle) && (j <= right)){//left and right to merge
		if(ori_array[i] < ori_array[j]) tmp[k++] = ori_array[i++];
		else tmp[k++] = ori_array[j++];
	}

	if(i > middle){//only remain right values
		int q=j;
		for(q=j; q<=right; q++) tmp[k++]=ori_array[q];
	}
	else{//only remain left values
		int q=i;
		for(q=i; q <= middle; q++) tmp[k++]=ori_array[q];
	}
}

static void copy(int ori_array[], int tmp[], int left, int right){
	int i = left;
	for(i=left; i<=right; i++) ori_array[i] = tmp[i];
}
int merge_sort(int ori_array[], int left, int right){
	int tmp[NUM];
	if(left < right){
		//divide
		int middle = (left + right)/2;
		merge_sort(ori_array, left, middle);
		merge_sort(ori_array, middle+1, right);
		//merge
		merge(ori_array, tmp, left, middle, right);
		copy(ori_array, tmp, left, right);
	}
}
