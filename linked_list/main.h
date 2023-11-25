#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *struct node - singly linked list.
 *@name: the name data.
 *@next: pointer to the next node
 *
 */

typedef struct node
{
	const char *name;
	struct node *next;
}linked;

linked *insertAtEnd(linked *head, const char *name);
int printList(linked *head);
linked *insertAtStart(linked *head, const char *name);
linked *insertAtIndex(linked *head, const char *name, int index);

#endif
