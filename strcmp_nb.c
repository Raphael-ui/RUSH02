int	strcmp_nb(char *s1, char *s2)
{
	while (*s1 >= '0' && *s1 <= '9')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
