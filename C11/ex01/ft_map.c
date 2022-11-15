#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*tab_r;

	tab_r = (int *)malloc(sizeof(int) * length);
	if (!tab_r)
		return (0);
	while (i < length)
	{
		tab_r[i] = f(tab[i]);
		i++;
	}
	return tab_r;
}

int	sum_one(int x)
{
	return (x + 1);
}

void	display_array(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d", tab[i++]);
	}
}

int main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9};
	int	*res = ft_map(tab, 10, &sum_one);
	display_array(res, 9);

}
