#include "myList.h"

using namespace std;

int main()
{
	int a[]={2,9,4,1,8,5,3};
	myList test;
	listNode *head = new listNode();
	head = test.initList(a,7);
	test.printList(head);
	return 0;
}
