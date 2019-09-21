#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	Node Head;
	Intlist(&Head);
	InsertHead(&Head, 10);
	InsertHead(&Head, 20);
	InsertHead(&Head, 30);
	InsertHead(&Head, 40);
	Show(&Head);
	return 0;
}