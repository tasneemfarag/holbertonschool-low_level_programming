#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the first element of the list
 * @index: Desired node at this position
 *
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  /* declarations */
 unsigned int i;

  for (i = 0; i < index ; i++)
    {
      if (head == NULL)
	return (NULL);
      head = head->next;
    }
  return (head);
}
