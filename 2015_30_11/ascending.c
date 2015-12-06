#include <stdio.h>
#include <malloc.h>
int main() {
	struct node {
		int data;
		struct node *ptr;
	};
	typedef struct node NODE;
	NODE *head, *first = 0, *cur = 0;
	int count = 0, choice = 1;
	while (choice)
	{
		head = (NODE *)malloc(sizeof(NODE));
		printf("Enter element\n");
		scanf("%d", &head->data);
		count++;
		if (first != 0)	{
			cur->ptr = head;
			cur = head;
		}
		else {
			first = head;
			cur = head;
		}
		printf("Click 1 to continue and 0 to stop\n");
		scanf("%d", &choice);
	}
	cur->ptr = NULL;
	NODE *last = cur, *temp;
	cur = first;
	while (cur->ptr != NULL) { // 1 2 7 20 15 10 
		if (cur->ptr->data > cur->ptr->ptr->data) {
			break;
		}
		cur = cur->ptr;
	}
	printf("%d\n", cur->data);
	cur->ptr->ptr = NULL;
	cur->ptr = last;
	cur = first;
	while (cur != NULL) {
		printf("%d -> ", cur->data);
		cur = cur->ptr;
	}
	printf("NULL\n");
	_getch();
	return 0;
}