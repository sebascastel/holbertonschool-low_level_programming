#include "lists.h"
/**
* delete_nodeint_at_index - deletes nth
* @head: head
* @index: index
* Return: Return
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a;
listint_t *b = *head;
listint_t *c;

if (index == 0)
{
if (!b)
return (-1);
*head = (*head)->next;
free(b);
return (1);
}
for (a = 0; a <= index; a++)
{
if (!b)
return (-1);
c = b;
b = b->next;
}
if (!b)
return (-1);
c->next = b->next;
free(b);
return (1);
}
