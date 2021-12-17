#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t *insert_node - function inserts number into a sorted singly linked list
 * @head: pointer list
 * @number: number int
 * Return: address of inserted node
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
	listint_t *a = NULL;

    if (!head)
        return (NULL);
    new = malloc(sizeof(*new));
    if (!new)
        return (NULL);
    
    new->n = number;
    new->next = NULL;

    if (!*head)
        *head = new;
    else if (number < (*head)->n)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        a = *head;
        while (a->next && a->next->n < number)
            a = a->next;
        new->next = a->next;
        a->next = new; 
    }
    return (new);
}