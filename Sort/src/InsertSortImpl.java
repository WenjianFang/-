
public class InsertSortImpl implements SortService{

	@Override
	public int sort(int[] ori_array, int n) {
		// TODO Auto-generated method stub
		for(int i=1; i < n; i++){
			for(int j=i; j>0; j--){
				if(ori_array[j] < ori_array[j-1])
					UtilTool.swap(ori_array, j, j-1);
				else
					break;
			}
		}
		return 0;
	}
	
}
