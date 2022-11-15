#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int  i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		while (i > 0)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				break;
			i--; 
		}
		i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
