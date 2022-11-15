#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int	i;
	int	len;
	
	if (str == 0)
		return str;
	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i || str[len] != '\0')
	{
		ft_putchar(str[len]);
		i++;
		len--;
	}
	return str;
}

int	main(void)
{
	rev_print(NULL);
	ft_putchar('\n');
	rev_print("59+8465569dgsgfafa");
	ft_putchar('\n');
	rev_print("");
	ft_putchar('\n');
	rev_print("rainbow dash");
	ft_putchar('\n');
}
