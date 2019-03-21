#include "lists.h"
/**
* _strlen - returns the length of the string
* @s: takes string
* Return: returns the length int
*/
unsigned int _strlen(const char *s)
{
int a;

a = 0;
while (s[a])
a++;
return (a);
}
/**
* add_node_end - adds node at the end
* @head: head
* @str: string
* Return: returns the address
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *l = malloc(sizeof(list_t));

list_t *m = *head;
if (l == NULL)
return (NULL);
l->str = strdup(str);
l->len = _strlen(str);
l->next = NULL;
if (*head == NULL)
{
*head = l;
return (*head);
}
while (m->next != NULL)
{
m = m->next;
}
m->next = l;
return (l);
}
