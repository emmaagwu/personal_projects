#include "main.h"

/**
 *printList- prints the data in the linked list
 *@head: the pointer to the list
 *Return: the number of nodes
 */

int printList(linked *head)
{
	linked *current = head;
	int node = 1;

	if (head == NULL)
		printf("This is an empty list\n");
	while(current != NULL)
	{
		printf("%d. %s\n", node++, current->name);
		current = current->next;
	}
	return (node);
}
