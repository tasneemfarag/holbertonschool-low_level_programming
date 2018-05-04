#include "lists.h"
/**
 * pop_listint - Deletes the first element of a list
 * @head: pointer to the first node of the list
 * Return: The number inside the node that is deleted
 */
int pop_listint(listint_t **head)
{
  /* Initializations */
  int n;
  listint_t *tmep;

  if (head == NULL || *head == NULL)
    return (0);
  n = (*head)->n;
  tmep = *head;
  *head = (*head)->next;
  free(tmep);
  return (n);
}
