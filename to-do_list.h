#ifndef TODOLIST_H
#define TODOLIST_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct task_var - structure for tasks informations
 * @taskname: name of the task
 * @date: start date
 * @start_time: start time of the task
 * @end_time: end time of the task
 * @status: completion status
 *
 * Description: task informations
 */
typedef struct task_var
{
	char *taskname;
	int date[3];
	int start_time[2];
	int end_time[2];
} task_t;
/**
 * struct task_stack - stack data structure
 * @data: task data
 * @prev: previous task
 * @next: next task
 *
 * Description: doubly linked list node structure
 * for task storage
 */
typedef struct task_stack
{
	task_t *data;
	struct task_stack *prev;
	struct task_stack *next;
}stack_t;
 /**
 * struct functions_t - opcode and its function
 *@opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 *
 */
typedef struct functions_t
{
	int opcode;
	void (*f)(stack_t **task);
}instruction_t;

void get_info(task_t **task);
void get_time(task_t **task);
void get_date(task_t **task);
stack_t *add_node(stack_t **head, task_t *data);
size_t display(stack_t *head);
task_t *delete_node(stack_t **head);
size_t node_len(stack_t *head);
void create_task(stack_t **stack);
void show_tasks(stack_t **stack);
#endif /*to-do_list*/
