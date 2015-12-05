#include <stdio.h>
#include <malloc.h>
int main() {
	struct node {
		int data;
		struct node *ptr;
	};
	typedef struct node NODE;
	NODE *head, *first = 0, *temp = 0;
	int count = 0;
	int choice = 1;
	while (choice)
	{
		head = (NODE *)malloc(sizeof(NODE));
		printf("Enter element\n");
		scanf("%d", &head->data);
		count++;
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
	temp->ptr = first;
	temp = first;
	int element;
	printf("\nAfter which element you want to insert\n");
	scanf("%d", &element);
	head = (NODE *)malloc(sizeof(NODE));
	printf("Enter the element\n");
	scanf("%d", &head->data);
	if (temp->data == element) {
		head->ptr = temp->ptr;
		temp->ptr = head;
	}
	else {
		temp = temp->ptr;
		while (temp->data != first->data) {
			if (temp->data == element) {
				head->ptr = temp->ptr;
				temp->ptr = head;
				break;
			}
			temp = temp->ptr;
		}
	}
	temp = first;
	printf("After insertion the elements are\n");
	printf("%d ", temp->data);
	temp = temp->ptr;
	while (temp->data != first->data) {
		printf("-> %d ", temp->data);
		temp = temp->ptr;
	}
	printf("-> %d ...", temp->data);
	_getch();
	return 0;
}