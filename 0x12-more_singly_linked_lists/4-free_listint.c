#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: First node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nodePointer = head;

	while (nodePointer != NULL)
	{
		head = head->next;
		free(nodePointer);
		nodePointer = head;
	}
}
