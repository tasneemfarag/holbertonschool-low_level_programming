#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of the linked list.
 * @head: pointer to first linked list node.
 * @n: value at new node
 *
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  /* declarations */
  listint_t *node, *temp_ptr;
  /* Memory allocations */
  node = malloc(sizeof(listint_t));
  /* In case of Failure */
  if (node == NULL)
    {
      return (NULL);
    }
  /* Initializations */
  node->n = n;
  node->next = NULL;
  temp_ptr = NULL;
  /* Check if there is no linked list */
  if (*head == NULL)
    {
      *head = node;
      return (node);
    }
  temp_ptr = *head;
  /* go through linked list */
  while (temp_ptr->next != NULL)
    {
      temp_ptr = temp_ptr->next;
    }
  temp_ptr->next = node;
  return (node);
}
