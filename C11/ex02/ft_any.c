#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
int	find_one(char *arr)
{
	if (*arr != 0)
		return (1);
	return (0);
}
*/

int main(void)
{
	int		(*f)(char*);
	char	*tab[5] = {"these","are","too","long", 0};
	char	*tab2[6] = {"3", 0, 0, 0, 0, 0};

	f = &ft_strlen;	
	ft_putnbr(ft_any(tab, f));
	ft_putnbr(ft_any(tab2, f));
}
