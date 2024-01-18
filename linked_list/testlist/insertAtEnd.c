#include "main.h"

/**
 * insertAtEnd- inserts a new node at the end of list
 *@head: pointer to the list
 *@name: name to be inserted
 *Return: the pointer to the list
 */

linked *insertAtEnd(linked *head, const char *name)
{
	linked *current = head;
	linked *newNode = (linked *)malloc(sizeof(linked));

	newNode->name = name;
	newNode->next = NULL;
	if (head == NULL)
	{
		head = newNode;
		return (head);
	}

	while(current->next != NULL)
		current = current->next;
	current->next = newNode;
	return (head);
}

