#include "lists.h"

/**
 * free_listint - free the linked list.
 * @head: pointer to first linked list node.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
  /* Initializations */
  listint_t *tmp;

  /* linked list is empty */
  if (head == NULL)
    return;
  while (head->next != NULL)
    {
      tmp = head->next;
      free(head);
      head = tmp;
    }
  free(head);
}
