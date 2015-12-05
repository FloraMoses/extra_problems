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
		scanf("%d", &head -> data);
		count++;
		if (first != 0)	{
			temp -> ptr = head;
			temp = head;
		}
		else {
			first = head;
			temp = head;
		}
		printf("Click 1 to continue and 0 to stop\n");
		scanf("%d", &choice);
	}
	int count1 = 0;
	temp -> ptr = NULL;
	temp = first;
	if (count % 2 != 0) {
		count /= 2;
		while (temp != NULL) {
			if (count == count1) {
				printf("Median is %d\n", temp -> data);
				break;
			}
			count1 += 2;
			temp = temp -> ptr -> ptr;
		}
	}
	else {
		count /= 2;
		while (temp != NULL) {
			if (count == count1) {
				printf("Median is %d \n", temp -> data, temp -> ptr -> data, ((temp -> data) + (temp -> ptr -> data)) / 2);
				break;
			}
			count1 += 2;
			temp = temp -> ptr -> ptr;
		}
	}
	_getch();
	return 0;
}