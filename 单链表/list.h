#ifndef _LIST_H_
#define _LIST_H_
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int date;
	struct Node*next;
}Node,*Plist;
void Intlist(Plist plist);
void InsertHead(Plist plist, int val);
void InsertTail(Plist plist,int val);
void Show(Plist plist);
#endif