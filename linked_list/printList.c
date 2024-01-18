#include "main.h"

/**
 * printList- prints the content of the list
 * @head: pointer to the list
 * Returns: Number of nodes.
 */

int printList(linked *head)
{
	linked *current = head;
	int n = 0;

	if (head == NULL)
		printf("This list is empty\n");
	while (current != NULL)
	{
		printf("%s\n", current->name);
		current = current->next;
		n++;
	}

	return (n);
}
