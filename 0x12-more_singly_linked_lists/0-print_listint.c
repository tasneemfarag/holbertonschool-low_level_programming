#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints a linked list.
 * @h: pointer to a linked list.
 *
 * Return: how many items in the linked list.
 */
size_t print_listint(const listint_t *h)
{
  /* declarations */
  int counter;

  /* Initializations */
  counter = 0;

  while (h != NULL)
    {
      printf("%d\n", h->n);

      h = h->next;
      counter++;
    }

  return (counter);
}
