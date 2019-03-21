#include "lists.h"
/**
* _strlen - returns the length of the string
* @s: takes string

* Return: returns the length int
*/
int _strlen(const char *s)
{
int a;

a = 0;
while (s[a])
a++;
return (a);
}
/**
* add_node - adds a node to a linked list
* @head: the head
* @str: string
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *l = malloc(sizeof(list_t));

if (l == NULL)
return (NULL);
l->str = strdup(str);
l->len = _strlen(str);
l->next = *head;
*head = l;
return (*head);
}
