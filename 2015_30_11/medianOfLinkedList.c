#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main() {
	struct node
	{
		int num;
		struct node *ptr;
	};
	typedef struct node NODE;
	NODE *head, *first, *temp = 0;
	int count = 0;
	int choice = 1;
	first = 0;
	while (choice)
	{
		head = (NODE *)malloc(sizeof(NODE));
		printf("Enter element\n");
		scanf("%d", &head -> num);
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
	temp -> ptr = 0;
	temp = first;
	if (count % 2 != 0) {
		count /= 2;
		while (temp != 0) {
			if (count == count1) {
				printf("Median is %d\n", temp -> num);
				break;
			}
			count1++;
			temp = temp -> ptr;
		}
	}
	else {
		count /= 2;
		while (temp != 0) {
			if (count == count1) {
				printf("Median of %d %d is %d \n", temp -> num, temp -> ptr -> num, ((temp -> num) + (temp -> ptr -> num)) / 2);
				break;
			}
			count1++;
			temp = temp -> ptr;
		}
	}
	_getch();
	return 0;
}