#include "main.h"

/**                                                                                                   * insertAtIndex- inserts a node at an index                                                          * @head: pointer to the list
 * @name: name to be inserted
 * @index: index at which to insert
 * Return: the pointer
 */

linked *insertAtIndex(linked *head, const char *name, int index)
{
        linked *current = head;
        int i;

        linked *newNode = (linked *)malloc(sizeof(linked));

        newNode->name = name;

        for (i = 1; i < index - 1 && current != NULL; i++)
                current = current->next;
        if (current != NULL)
        {
                newNode->next = current->next;
                current->next = newNode;
        }
        return (head);
}
