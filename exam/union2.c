#include <unistd.h>

int check_doubles2(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return(0);
		}
		i++;
	}
	return (1);
}

int check_doubles1(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	uni(char *str, char *base)
{
	int i = 0;	
	while (str[i])
	{
		if (check_doubles1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (check_doubles2(str, base[i]) == 1)
		{
			if (check_doubles1(base, base[i], i) == 1)
				write(1, &base[i], 1);
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 3)
		uni(argv[1], argv[2]);
	write(1, "\n", 1);
}
