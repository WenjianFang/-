public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] ori_array = {3, 4, 20, -3, 12, 20, 13, 44, 23, 90, -1};
//		SortService ss = new InsertSortImpl();
//		ss.sort(ori_array, ori_array.length);
//		UtilTool.print("insert_sort", ori_array);
		
//		SortService ss = new BubbleSortImpl();
//		ss.sort(ori_array, ori_array.length);
//		UtilTool.print("bubble_sort", ori_array);
		
//		SortService ss = new SelectionSortImpl();
//		ss.sort(ori_array, ori_array.length);
//		UtilTool.print("selection_sort", ori_array);
		
//		SortService ss = new QuickSortImpl();
//		ss.sort(ori_array, ori_array.length);
//		UtilTool.print("quick_sort", ori_array);

		SortService ss = new HeapSortImpl();
		ss.sort(ori_array, ori_array.length);
		UtilTool.print("heap_sort", ori_array);
	}

}
