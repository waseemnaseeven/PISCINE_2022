/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:43:30 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/21 18:05:34 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}
/*int	verif_input(char *argv)
{
	int	i;
	int	j;
	
	i = 0;
	i = ft_strlen(argv);
	if (i > 32)
		return (0);
	j = 0;
	while (argv[j] == ' ')
		j++;
	while (argv[j])
	{
		if (!(argv[j] >= '1' && argv[j] <= '4'))
			return (0);
		j++;
	}
	return (1); 
}*/

/*int	aff_4(char *argv, char tab[][4])
{
	int	i;
	int 	j;
	int	k;
	i = 0;
	while (argv[i] == '1')
	{
		tab[j][k] = '4';
		ft_putchar(tab[j][k]);
		i++;
	}
}*/

void	map_init(char tab[][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			tab[i][j] = '0';
			ft_putchar(tab[i][j]);
			if (i < 3)
				write(1, " ", 1);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int	main(int argc, char **argv)
{
	char	map;

	(void) argc;
	(void) argv;
	map_init(map);
	return (0);
}
/* if (verif_input(argv[1]) == 1)*/
