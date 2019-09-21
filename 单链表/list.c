#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Intlist(Plist plist)
{
	if (plist == NULL)
	{
		return;
	}
	else
		plist->next = NULL;
}

Node*GetNode(int val)
{
	Node*pGet=(Node*)malloc(sizeof(Node));
	pGet->next = NULL;
	pGet->date=val;
	return pGet;
}

void InsertHead(Plist plist,int val)
{
	Node*pGet = GetNode(val);
	pGet->next = plist->next;
	plist->next = pGet;
}

void Show(Plist plist)
{
	Node*pCur = plist->next;
	while (pCur!=NULL)
	{
		printf("%d ",pCur->date);
		pCur = pCur->next;
	}
}

void InsertTail(Plist plist, int val)
{
	Node*pCur = plist;
	Node*pGet = GetNode(val);
	while (pCur->next!=NULL)
	{
		pCur = pCur->next;
	}
	pCur->next = pGet;
}