#include "lists.h"
/**
* print_listint_safe - prints the circular linked list
* @head: head
* Return: return
*/
size_t print_listint_safe(const listint_t *head)
{
size_t a;
listint_t *b = (listint_t *)head;

a = 0;
while (b && b > b->next)
{
printf("[%p] %d\n", (void *)b, b->n);
b = temp->next;
a++;
}
if (b)
{
printf("[%p] %d\n", (void *)b, temp->n);
printf("-> [%p] %d\n", (void *)b->next, temp->next->n);
a++;
}
return (a);
}
