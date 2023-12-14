#include "to-do_list.h"
/**
 * get_time - gets and update task time
 * @task: task data to be updated
 * Return: void
 */
void get_time(task_t **task)
{
	int result1, result2;

	printf("Enter Task Name\n");
	scanf("%s", (*task)->taskname);
	while (1)
	{
		printf("Enter start time\n");
		printf("Hrs: ");
		result1 = scanf("%d", &(*task)->start_time[0]);
		printf(" Mins: ");
		result2 = scanf("%d", &(*task)->start_time[1]);
		if (result1 != 1 && result2 != 1)
			fprintf(stderr, "Invalid input. Please enter an integer.\n");
		else
			break;
	}
	while (1)
	{
		printf("\nEnter end time\n");
		printf("Hrs: ");
		result1 = scanf("%d", &(*task)->end_time[0]);
		printf(" Mins: ");
		result2 = scanf("%d", &(*task)->end_time[1]);
		if (result1 != 1 && result2 != 1)
			fprintf(stderr, "Invalid input. Please enter an integer.\n");
		else
			break;
	}
}
/**
 * get_date - gets and update task date
 * @task: task data to be updated
 * Return: void
 */
void get_date(task_t **task)
{
	int result1, result2, result3;

	while (1)
	{
		printf("\nEnter Date\n");
		printf("Day: ");
		result1 = scanf("%d", &(*task)->date[0]);
		printf(" Month: ");
		result2 = scanf("%d", &(*task)->date[1]);
		printf(" Year: ");
		result3 = scanf("%d", &(*task)->date[2]);
		if (result1 != 1 && result2 != 1 && result3 != 1)
			fprintf(stderr, "Invalid input. Please enter an integer.\n");
		else
			break;
	}
}
