
public class QuickSortImpl implements SortService{

	private int partition(int[] ori_array, int left, int right){
		int pivot = ori_array[right];
		int i = left;
		for(int j=left; j<=right; j++){
			if(ori_array[j] < pivot){
				UtilTool.swap(ori_array, i, j);
				i++;
			}
		}
		UtilTool.swap(ori_array, i, right);
		return i;
	}
	private void quickSort(int[] ori_array, int left, int right){
		if(left < right){
			int pos = partition(ori_array, left, right);
			quickSort(ori_array, left, pos-1);
			quickSort(ori_array, pos+1, right);
		}
		
	}
	@Override
	public int sort(int[] ori_array, int n) {
		// TODO Auto-generated method stub
		quickSort(ori_array, 0, n-1);
		return 0;
	}
	

}
