#include "to-do_list.h"
/**
 * create_task - create task by creating a node in stack
 * @stack: stack
 * Return: void
 */
void create_task(stack_t **stack)
{
	task_t *task_info;

	printf("Enter task name: ");
	scanf("%s", task_info->taskname);
	get_time(&task_info);
	get_date(&task_info);
	add_node(stack, task_info);
}
/**
 * show_tasks - print all content of the stack
 * @stack: stack
 * Return: void
 */
void show_tasks(stack_t **stack)
{
	stack_t *stack_ptr = *stack;

	if (stack_ptr != NULL)
	{
		display(stack_ptr);
	}
}
