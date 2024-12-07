#pragma once
#include <iostream>
#include <iostream>
using namespace std;
 class DoublyLinkedList
{
	 
	 
public:
	
	void push_front(int data)
	{
		
		if (head == nullptr)
		{
			head = new Node(data);
			head->prev = nullptr;
			head->next = tail;
			if (tail  != nullptr)
			{
				tail->prev = head;
			}
		}
		else
		{
			Node* b = head;
			head = new Node(data);
			b->prev = head;
			head->next = b;
			head->prev = nullptr;
			if (tail ==nullptr)
			{
				tail = b;
				b->next = nullptr;
			}
		}

	}
	void push_back(int data)
	{
		if (tail == nullptr)
		{
			tail= new Node(data);			
			tail->prev =head;
			tail->next = nullptr;
			if (head != nullptr)
			{
				head->next = tail;
			}
		}
		else
		{
			Node* b = tail;
			tail = new Node(data);
			b->next = tail;
			tail->prev = b;
			tail->next = nullptr;
			if (head == nullptr)
			{
				head = b;
				b->prev = nullptr;
			}
		}
	}
	void pop_front()
	{
		if (head == nullptr)
		{
			if (tail != nullptr)
			{
				tail = nullptr;
			}
			
				
		}
		else
		if (head->next == NULL)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
			head = head->next;
			head->prev = nullptr;
		}
		
	}
	void pop_back()
	{
		if (tail == nullptr)
		{
			if (head != nullptr)
			{
				head = nullptr;
			}
			
				
		}
		else
		if (tail->prev == nullptr)
		{
			tail = nullptr;
			head = nullptr;
		}
		else
		{
			tail = tail->prev;
			tail->next = nullptr;
		}
		
	}
	void display()
	{
		Node* a = head;
		
		while (a != nullptr)
		{
			cout << a->data << endl;
			a = a->next;
		}
		if (tail != nullptr&&head==nullptr)
		{
			cout << tail->data << endl;
		}
	}

//private:
	struct Node
	{
		int data;
		Node* next;
		Node* prev;
		Node(int data)
		{
			this->data = data;
		}
		~Node()
		{
			delete this;
		}
	};
	Node* head;
	Node* tail;
};

