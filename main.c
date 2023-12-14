#include "to-do_list.h"
/**
 * main - entry point
 *
 * Return: 0 always
 */
int  main(void)
{
	int user_input_f;
	stack_t *stack;

	printf("Welcome User");
	while (1)
	{
		printf("1. Create Task\t2. Show Tasks\t");
		printf("3. Marks as Completed\t4. Delete Task\n");
		scanf("%d", &user_input_f);

		switch (user_input_f)
		{
			case 1:
				create_task(&stack);
			case 2:
				show_tasks(&stack);
			default:
				printf("Invalid input");
		}
	}
	return (0);
}
