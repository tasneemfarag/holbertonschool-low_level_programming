#include "lists.h"

listint_t *create_node(int n);
/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: Pointer to the first element of the list
 * @idx: Index to insert a node at
 * @n: number to be inserted into the node
 *
 * Return: The address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  /* declarations */
  unsigned int i;
  listint_t *temp;
  listint_t *temp_old;
  listint_t *new_node;
  
  temp = *head;
  if (head == NULL)
    return (NULL);
  new_node = create_node(n);
  if (new_node == NULL)
    return (NULL);
  if (*head == NULL)
    {
      *head = new_node;
      return (*head);
    }
  
  if (idx == 0)
    *head = new_node;
  for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
    temp = temp->next;
  if (temp == NULL)
    return (NULL);
  if (idx == 0)
    new_node->next = temp;
  else
    {
      temp_old = temp->next;
      temp->next = new_node;
      new_node->next = temp_old;
    }
  return (*head);
}

/**
 * create_new_node - Creates a new node
 * @n: Value to add to new node
 * Return: A pointer to a node
 */
listint_t *create_node(int n)
{
  listint_t *node;

  node = malloc(sizeof(listint_t));
  if (node == NULL)
    return (NULL);
  node->n = n;
  node->next = NULL;

  return (node);
}
