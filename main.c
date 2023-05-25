#include "monty.h"
/**
 * main - main entry for the program
 * @argc: num of cmd args
 * @argv: array of cmd args
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL, *cmd;
	size_t len = 0;
	ssize_t read;
	unsigned int num;
	stack_t *head = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		cmd = strtok(line, "\n \t\r$");
		num++;

		if (cmd)
		{
			parse_command(&head, cmd, num);
		}
	}
	fclose(file);
	if (line)
	{
		free(line);
	}
	return (0);

}
