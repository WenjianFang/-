
public class HeapSortImpl implements SortService{

	private void max_heap_recu(int[] ori_array, int i, int n){
		int largest = i;
		int left = 2*i+1;
		int right = 2*i+2;
		if((left<n)&&(ori_array[left] > ori_array[largest])) largest = left;
		if((right<n)&&(ori_array[right] > ori_array[largest])) largest = right;
		if(largest != i){
			UtilTool.swap(ori_array, i, largest);
			max_heap_recu(ori_array, largest, n);
		}
	}
	@Override
	public int sort(int[] ori_array, int n) {
		// TODO Auto-generated method stub
		for(int i=n/2-1; i>=0; i--) max_heap_recu(ori_array, i, n);
		for(int i=n-1; i>=0; i--){
			UtilTool.swap(ori_array, 0, i);
			max_heap_recu(ori_array, 0, i-1);
		}
		return 0;
	}
	

}
