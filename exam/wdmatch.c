#include <unistd.h>

void	ft_putstr(char *str)
{
	int 	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	wdmatch(char *str, char *base)
{
	int i = 0;
	int j = 0;

	while (str[i] && base[j])
	{
		if (str[i] == base[j])
		{
			i++;	
			if (i == ft_strlen(str))
				ft_putstr(str);
		}
		j++;
		
	}
}


int main (int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
}
