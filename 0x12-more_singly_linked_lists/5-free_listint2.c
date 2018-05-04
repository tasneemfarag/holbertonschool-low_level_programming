#include "lists.h"

/**
 * free_listint2 - freesthe linked list and and sets the head to NULL.
 * @head: pointer to the fist node in the linked list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
  /* Initializations */
  listint_t *tmp;

  if (head == NULL || *head == NULL)
    return;
  while ((*head)->next != NULL)
    {
      tmp = (*head)->next;
      free(*head);
      *head = tmp;
    }
  free(*head);
  *head = NULL;
}
