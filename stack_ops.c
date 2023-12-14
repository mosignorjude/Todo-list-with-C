#include "to-do_list.h"
#include <stdio.h>
/**
 * add_node - adds data into a linked list
 * @head: head node of the linked list
 * @data: data to be inserted
 *
 * Return: void
 */
stack_t *add_node(stack_t **head, task_t *data)
{
	stack_t *new_node, *tail;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	new_node->data = data;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = tail = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
/**
 * display -print the contents of stacked linked list
 * @head: head node of the linked list
 *
 * Return: void
 */
size_t display(stack_t *head)
{
	size_t count = 0;

	if (head == NULL)
	{
		printf("stack underflow\n");
	}
	else
	{
		while (head != NULL)
		{
			printf("Task Name: %s\n", (head->data)->taskname);
			printf("Date: %d-%d-%d\n", (head->data)->date[0], (head->data)->date[1],
					 (head->data)->date[2]);
			printf("Start time: %d:%d\nEndtime: %d:%d\n", (head->data)->start_time[0],
					 (head->data)->start_time[1], (head->data)->end_time[0],
					  (head->data)->end_time[1]);
			head = head->next;
			count++;
		}
	}
	return (count);
}
/**
 * delete_node - delete the top contents of linked list stack
 * @head: stacked linked list to be deleted
 *
 * Return: value of the deleted node
 */
task_t *delete_node(stack_t **head)
{
	task_t *data;
	stack_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		(*head)->prev = NULL;
		*head = (*head)->next;
		data = temp->data;
		free(temp);
	}
	return (data);
}
/**
 * node_len - calculates the length of a list
 * @head: head of list
 * Return: number of elements in the list
 */
size_t node_len(stack_t *head)
{
	size_t count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
