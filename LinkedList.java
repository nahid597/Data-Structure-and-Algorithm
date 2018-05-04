package ru.ac.bd;

import java.util.Scanner;

public class LinkedList {
	
	Node head;
	
	class Node{
		
		int data;
		Node next;
		
		Node() {
			
			data = 0;
			next = null;
			
		}
	}
	
	public void insertIntoFirst(int new_data)
	{
		Node new_Node = new Node();
		
		new_Node.data = new_data;
		new_Node.next = head;
		
		head = new_Node;
		
	}
	
	
	public void insertIntoLast(int new_data)
	{
		Node new_node = new Node();
		new_node.data = new_data;
		new_node.next = null;
		
		if(head == null)
		{
			Node node = new Node();
			node.data = new_data;
			
			head = node;
			
			return;
		}
		
		Node last = head;
		
		while(last.next != null)
		{
			last = last.next;
		}
		
		last.next = new_node;
		
	}
	
	public void insertIntoNthPosition(int pos, int new_data)
	{
		
		Node new_node = new Node();
		
		new_node.data = new_data;
		new_node.next = null;
		
		if(pos == 0)
		{	
			new_node.next = head;
			head = new_node;
			return;
				
		}
		
		Node current = head;
		Node previous = null;
		
		int i = 1;
		
		while(i < pos)
		{
			previous = current;
			current = current.next;
			if(current == null)
				break;
			
			i++;
			
		}
		
		new_node.next = current;
		previous.next = new_node;
		
	}
	
	public void print()
	{
		Node temp = head;
		
		while(temp != null)
		{
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}
	
	
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		LinkedList list = new LinkedList();
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("How Many Number you are Insert:" );
		
		int n = input.nextInt();
		
		for(int i = 0; i< n; i++)
		{
			int x = input.nextInt();
			list.insertIntoLast(x);
			//list.insertIntoFirst(x);
			
			
		}
		
		list.print();
		
		System.out.println("\nplease enter the position number where you insert new node: ");

		int np = input.nextInt();
		
		System.out.println("\nplease enter the value which you insert : ");
		
		int np1 = input.nextInt();
		
		System.out.println("\nAfter insert data into nth position: ");
		
		list.insertIntoNthPosition(np,np1);
		list.print();	
		

	}

}


