#include "main.h"

/**
 *main- builds a linked list
 *Return: Always 0
 */

int main(void)
{
	linked *head = NULL;

	head = insertAtEnd(head, "Emmanuel");
	head = insertAtEnd(head, "Ude");
	head = insertAtEnd(head, "Ezinne");
	head = insertAtEnd(head, "Nkuma");
	head = insertAtEnd(head, "Janet");
	head = insertAtEnd(head, "family");
	head = insertAtEnd(head, "home");
	head = insertAtStart(head, "Jane");
	head = insertAtStart(head, "Agwu");
	head = insertAtIndex(head, "Augustine", 4);

	printList(head);

	return (0);
}
