int	strcmp_nb(char *s1, char *s2);

char	*loops(char ***array, char **argv, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (strcmp_nb(array[i][1],argv[1]))
			return (array[i][0]);
		i++;
	}
	return (0);
}
