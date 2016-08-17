import java.util.Arrays;


public final class UtilTool {
	private UtilTool(){}
	public static void swap(int[] num, int i, int j){
		int tmp = num[i];
		num[i] = num[j];
		num[j] = tmp;
	}
	public static void print(String str, int[] num){
		System.out.println(str+": "+Arrays.toString(num));
	}
}
