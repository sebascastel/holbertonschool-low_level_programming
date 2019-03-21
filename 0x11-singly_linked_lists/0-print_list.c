#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: a pointer to a list
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
int a = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
num_element++;
}
return (a);
}













