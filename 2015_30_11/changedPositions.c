#include <stdio.h>
#include <malloc.h>
struct node {
	int data;
	struct node *ptr;
};
typedef struct node NODE;
void swap(NODE*, NODE*, NODE*, NODE*, NODE*);
int main() {
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
	NODE *temp, *temp1;
	while (cur->ptr->ptr != NULL) {
		if (cur->ptr->data > cur->ptr->ptr->data) {
			temp = cur;
			break;
		}
		cur = cur->ptr;
	}
	while (cur->ptr->ptr != NULL) {
		if (cur->ptr->data < cur->ptr->ptr->data) {
			temp1 = cur;
			break;
		}
		cur = cur->ptr;
	}
	swap(first, temp, temp1, temp->ptr, temp1->ptr);
	cur = first;
	while (cur != NULL) {
		printf("%d -> ", cur->data);
		cur = cur->ptr;
	}
	printf("NULL\n");
	_getch();
	return 0;
}
void swap(NODE **first, NODE *prevx, NODE *prevy, NODE *currx, NODE *curry)
{
	if (prevx != NULL)
		prevx->ptr = curry;    
	else
		*first = curry;
	if (prevy != NULL)
		prevy->ptr = currx;
	else
		*first = currx;
	struct node *temp = curry->ptr;
	curry->ptr = currx->ptr;
	currx->ptr = temp;
}