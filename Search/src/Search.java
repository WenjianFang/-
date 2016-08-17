
public final class Search {
	private Search() { }
	
	/**
	 * binary search
	 */
	public static int binarySearch(int[] array, int element){
		
		int left = 0;
		int right = array.length;
		int middle = (left+right)/2;
		while(left <= right){ /*<= ensure catch the element*/
			middle = (left+right)/2;
			if(array[middle] > element)
				right = middle-1;
			else if(array[middle] < element)
				left = middle+1;
			else
				return middle;
		}
		return -1;
	}
	
}
