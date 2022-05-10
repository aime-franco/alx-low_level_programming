
<<<<<<< HEAD
/**
 * main - Entry point
 * @argc: counts number of parameter passed in main
 * @argv: contains the array of argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, mul = 1;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			printf("%s\n", argv[x]);
			mul *= atoi(argv[x]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
=======
>>>>>>> c910f06126d6a1060dd77cff99d36c23fa369b70
