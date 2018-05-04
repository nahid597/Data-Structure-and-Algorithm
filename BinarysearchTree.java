package ru.ac.bd;

import java.util.*;

public class BinarysearchTree {
	
	
	
	Node root;
	
	class Node{
		
		int key;
		Node left,right;
		
		Node(int item)
		{
			key = item;
			left = right = null;
		}
		
	}
	
	BinarysearchTree()
	{
		root = null;
	}
	
	public void insertRec(int key)
	{
		root = insert(root,key);
	}
	
	public Node insert(Node root, int key)
	{
		 if(root == null)
		 {
			 root = new Node(key);
			 
			 return root;
		 }
		 
		 
		 if(key < root.key)
			root.left =  insert(root.left, key);
		 
		 else if(key > root.key)
			 root.right = insert(root.right, key);
		  
		return root;
		
	}
	
	public void postorder()
	{
		postorderRec(root);
	}
	
	public void postorderRec(Node root)
	{
		if(root != null)
		{
			postorderRec(root.left);
			postorderRec(root.right);
			System.out.println(root.key);	
			
		}
		
	}
	
	public void inorder()
	{
		inorderRec(root);
	}
	
	public void inorderRec(Node root)
	{
		if(root != null)
		{
			inorderRec(root.left);
			System.out.println(root.key);	
			inorderRec(root.right);
			
			
		}
		
	}
	
	public void preorder()
	{
		preorderRec(root);
	}
	
	public void preorderRec(Node root)
	{
		if(root != null)
		{
			System.out.println(root.key);	
			preorderRec(root.left);
			preorderRec(root.right);
			
			
		}
		
	}
	

	public static void main(String[] args)  {
		// TODO Auto-generated method stub

		     
		
		BinarysearchTree bst = new BinarysearchTree();
		
		Scanner input = new Scanner(System.in);
				
		while(input.hasNextInt())
		{
			int x = input.nextInt();
			
			bst.insertRec(x);
			
		}
		
		
		System.out.println("After traverse postorder: ");
		
		bst.postorder();	//// if you want to traverse postorder
		
		System.out.println("After traverse preorder: ");
		bst.preorder();	// if you want to traverse preorder
		
		System.out.println("After traverse inorder: ");
        bst.inorder();  // if you want to traverse inorder
		
		
			

	}

}
