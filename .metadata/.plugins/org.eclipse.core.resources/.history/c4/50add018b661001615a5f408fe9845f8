
public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Integer[] array = {2,3,23,9,12,39,42,11,8};
		Character[] array = {'a', 'C', 'd', '2', 'e', 'b'};
		BinaryTree<Character> tree= new BinaryTree<>();
		BinaryTreeNode<Character> root = tree.createBinaryTree(array);
		
		System.out.println("pre order recu: "+tree.preOrderRecu(root).toString());
		System.out.println("pre order:      "+tree.preOrder(root).toString());
		
		System.out.println("in order Recu: "+tree.inOrderRecu(root).toString());
		System.out.println("in order:      "+tree.inOrder(root).toString());
		
		System.out.println("post order Recu: "+tree.postOrderRecu(root).toString());
		System.out.println("post order:      "+tree.postOrder(root).toString());
		
		System.out.println("level traverse : "+tree.levelTraverse(root).toString());
		
	}

}
