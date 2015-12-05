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
	cur = first;
	NODE *previous = NULL, *next;
	while (cur != NULL) {
		next = cur->ptr;              
		cur->ptr = previous;          
 		previous = cur;               
		cur = next;                   
	}
	cur = previous;
	while (cur != NULL) {
		printf("%d -> ", cur->data);
		cur = cur->ptr;
	}
	_getch();
	return 0;
}