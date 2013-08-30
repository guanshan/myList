#include "myList.h"

using namespace std;

listNode * myList::initList(int a[],int n)
{
	listNode * head = new listNode();
	head = NULL;
	for(int i=0;i<n;++i)
	{
//		addNode(&head,a[i]);
		insertSort(&head,a[i]);
	}
	return head;
}

void myList::addNode(listNode ** head,int num)
{
	listNode *node=new listNode();
	node->value = num;
	node->next = NULL;
	if(*head==NULL)
	{
		*head=node;
		return ;
	}
	listNode * pNode = *head;
	while(pNode->next!=NULL)
	{
		pNode = pNode->next;
	}
	pNode->next=node;
}

void myList::insertSort(listNode ** head,int num)
{
	listNode * node = new listNode();
	node->value = num;
	node->next=NULL;
	if(*head==NULL)
	{
		*head = node;
		return ;
	}
	listNode *pNode = *head;
	if(num<pNode->value)
	{
		node->next=pNode;
		*head=node;
		return ;
	}
	while(pNode->next!=NULL && num>pNode->next->value)
		pNode = pNode->next;
	node->next=pNode->next;
	pNode->next=node;
}

void myList::printList(listNode *head)
{
	if (head==NULL)
		return ;
	listNode *pNode = head;
	while(pNode!=NULL)
	{
		cout << pNode->value << " " << flush;
		pNode = pNode->next;
	}
	cout << endl;
}
