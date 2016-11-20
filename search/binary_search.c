/*
 * binary_search.c
 *
 *  Created on: Aug 15, 2016
 *      Author: wenjian
 */
int binary_search(int array[], int n, int element){
	int left = 0;
	int right = n-1;

	int middle = left + (right - left)/2;

	while(left<=right){
		middle = left + (right - left)/2;
		if(array[middle] == element) return middle;
		else if(element < array[middle]) right = middle-1;
		else left = middle+1;
	}
}
