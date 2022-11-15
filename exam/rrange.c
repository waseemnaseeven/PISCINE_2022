#include <stdio.h>
#include <stdlib.h>

int	negative(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	*m;
	int	*tab;
	int	size = 0;

	size = negative(end - start) +1;
	m = (tab = malloc(size * sizeof(int)));
	
	if (!m)
		return NULL;
	if (start < end)
	{
		while (i < size)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return tab;
}

int main(void)
{
	int	i = 0;
	int start = 23;
	int end = -3;
	int size = negative(end - start) + 1;
	int *tab = ft_range(start, end);
	while(i < size)
	{
		printf("%i", tab[i]);
		i++;
	}
}
