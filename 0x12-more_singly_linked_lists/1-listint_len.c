#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - returns number of items in a linked list.
 * @h: pointer to a linked list.
 *
 * Return: how many items in the linked list.
 */
size_t listint_len(const listint_t *h)
{
  /* declarations */
  int counter;

  /* Initializations */
  counter = 0;

  while (h != NULL)
    {
      h = h->next;
      counter++;
    }

  return (counter);
}
