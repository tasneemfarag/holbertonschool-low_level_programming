#include "lists.h"

/**
 * sum_listint - Calculates the sum of the integers in a list
 * @head: Pointer to the first node of a list
 *
 * Return: The total sum of values
 */
int sum_listint(listint_t *head)
{
  /* declarations */
  int sum;

  sum = 0;
  if (head == NULL)
    return (0);
  while (head != NULL)
    {
      sum = sum + head->n;
      head = head->next;
    }
  return (sum);
}
