#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the beginning of the linked list.
 * @head: pointer to first node.
 * @n: value at the node
 *
 * Return: address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  /* declarations */
  listint_t *node;

  /* Memory allocations */
  node = malloc(sizeof(listint_t));

  /* Initializations */
  node->n = n;
  node->next = *head;

  if (node == NULL)
    {
      return (NULL);
    }

  *head = node;

  return (node);
}
