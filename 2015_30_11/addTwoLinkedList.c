#include <stdio.h>
#include <malloc.h>
int main() {
	struct node {
		int data;
		struct node *ptr;
	};
	typedef struct node NODE;
	NODE *head, *first = 0, *temp = 0;
	NODE *head1, *first1 = 0, *temp1 = 0;
	int choice = 1;
	while (choice)
	{
		head = (NODE *)malloc(sizeof(NODE));
		printf("Enter element for list1\n");
		scanf("%d", &head->data);
		if (first != 0)	{
			temp->ptr = head;
			temp = head;
		}
		else {
			first = head;
			temp = head;
		}
		printf("Click 1 to continue and 0 to stop\n");
		scanf("%d", &choice);
	}
	temp->ptr = NULL;
	temp = first;
	choice = 1;
	while (choice)
	{
		head1 = (NODE *)malloc(sizeof(NODE));
		printf("Enter element for list 2\n");
		scanf("%d", &head1->data);
		if (first1 != 0)	{
			temp1->ptr = head1;
			temp1 = head1;
		}
		else {
			first1 = head1;
			temp1 = head1;
		}
		printf("Click 1 to continue and 0 to stop\n");
		scanf("%d", &choice);
	}
	temp1->ptr = NULL;
	temp1 = first1;
	NODE *tempres = 0, *headres, *firstres = 0;
	while (temp != NULL || temp1 != NULL) {
		headres = (NODE *)malloc(sizeof(NODE));
		if (temp == NULL) {
			headres->data = temp1->data;
			if (firstres != 0)	{
				tempres->ptr = headres;
				tempres = headres;
			}
			else {
				firstres = headres;
				tempres = headres;
			}
			temp1 = temp1->ptr;
		}
		else if (temp1 == NULL) {
			headres->data = temp->data;
			if (firstres != 0)	{
				tempres->ptr = headres;
				tempres = headres;
			}
			else {
				firstres = headres;
				tempres = headres;
			}
			temp = temp->ptr;
		}
		else {
			headres->data = temp1->data + temp->data;
			if (firstres != 0)	{
				tempres->ptr = headres;
				tempres = headres;
			}
			else {
				firstres = headres;
				tempres = headres;
			}
			temp1 = temp1->ptr;
			temp = temp->ptr;
		}
	}
	tempres->ptr = NULL;
	tempres = firstres;
	while (tempres != NULL) {
		printf("%d -> ", tempres->data);
		tempres = tempres->ptr;
	}
	printf("NULL\n");
	_getch();
	return 0;
}