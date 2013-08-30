#ifndef MYLIST_H_H_H___
#define MYLIST_H_H_H___

#include <iostream>
#include <string>

struct listNode
{
	int value;
	listNode *next;
};

class myList
{
public:
	listNode * initList(int a[],int n);
	void addNode(listNode ** head,int num);
	void insertSort(listNode **head,int num);
	void printList(listNode *head);
};

#endif
