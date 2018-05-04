#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: Points to the beginning of the list
 * @index: Index of the node to be freed
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  /* declarations */
  unsigned int i;
  listint_t *temp;
  listint_t *node;

  temp = *head;
  if (head == NULL || *head == NULL)
    return (-1);
  for (i = 0; temp != NULL && i < index - 1 && index != 0; i++)
    temp = temp->next;
  if (temp == NULL)
    return (-1);
  if (index == 0)
    {
      node = temp->next;
      free(temp);
      *head = node;
    }
  else
    {
      if (temp->next == NULL)
	node = temp->next;
      else
	node = temp->next->next;
      free(temp->next);
      temp->next = node;
    }
  return (1);
}
