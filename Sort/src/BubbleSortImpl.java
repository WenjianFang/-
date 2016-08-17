
public class BubbleSortImpl implements SortService{

	@Override
	public int sort(int[] ori_array, int n) {
		// TODO Auto-generated method stub
		for(int i=0; i < n; i++){
			for(int j=n-1; j>0; j--){
				if(ori_array[j] < ori_array[j-1])
					UtilTool.swap(ori_array, j-1, j);
			}
		}
		return 0;
	}

}
