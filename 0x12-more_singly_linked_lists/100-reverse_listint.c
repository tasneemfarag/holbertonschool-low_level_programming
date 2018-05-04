#include "lists.h"

/**
 * reverse_listint - Reverse a singly linked list
 * @head: pointer to the first node
 *
 * Return: A pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
  /* declarations */
  listint_t *old_temp;
  listint_t *new_temp;

  if (head == NULL || *head == NULL)
    return (NULL);
  old_temp = *head;
  *head = old_temp->next;
  old_temp->next = NULL;

  while (*head != NULL)
    {
      new_temp = (*head)->next;
      (*head)->next = old_temp;
      old_temp = *head;
      if (new_temp == NULL)
	return (*head);
      *head = new_temp;
    }
  if (*head == NULL)
    {
      *head = old_temp;
      return (*head);
    }
  return (NULL);
}
