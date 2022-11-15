#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (f(tab[i], tab[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	function(int x, int y)
{
	if (x < y)
		return (-x);
	else if (x == y)
		return (0);
	else
		return (x);

}

int main(void)
{
	int tab[] = {25,48,665,2,35,4,3,9,7,8};
	ft_putnbr(ft_is_sort(tab, 9, &function));
	printf("\n");
	int i = 0;
	printf("%d", tab[i]);
	
}
