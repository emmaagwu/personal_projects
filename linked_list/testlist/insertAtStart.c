#include "main.h"

/**
 * insertAtStart- inserts a new node at start
 * @head: the pointer to the list
 * @name: name to be inserted
 * Return: pointer to the list
 */

linked *insertAtStart(linked *head, const char *name)
{
	linked *newNode = (linked *)malloc(sizeof(linked));

	newNode->name = name;
	newNode->next = head;
	head = newNode;

	return (head);
}
