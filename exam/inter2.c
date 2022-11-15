#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	check_double(char *str, char c, int pos)
{
	int 	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *base)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		while (base[j])
		{
			if (str[i] == base[j])
			{
				if (check_double(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
					break;
					
				}
				
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
