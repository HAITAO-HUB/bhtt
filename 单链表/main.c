/*Node*LastKNode(Plist plist,int n)//Ѱ�ҵ������е�����n�����
{
	Node*q = plist;
	Node*p = plist;
	for (int i = 0; i < n-1;i++)
	{
		p = p->next;
		if (p->next == NULL)
		{
			printf("û�д˽��");
			break;
		}
	}
	while (p!=NULL)
	{
		p = p->next;
		q = q->next;
	}
	return q;
}
*/
#include"list.h"
int main()
{
	Node head;
	intlist(&head);
	InsertHead(&head,10);
	InsertHead(&head,20);
	InsertHead(&head,30);
	InsertHead(&head,40);
	Show(&head);
}
