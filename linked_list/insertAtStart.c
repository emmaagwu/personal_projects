#include "main.h"

/**
 * insertAtStart- inserts a node at the start of list.
 * @head: pointer to the list
 * @name: name to insert
 * Return: the pointer
 */

linked *insertAtStart(linked *head, const char *name)
{
	linked *newNode = (linked *)malloc(sizeof(linked));

	newNode->name = name;
	newNode->next = head;
	head = newNode;

	return (head);
}
