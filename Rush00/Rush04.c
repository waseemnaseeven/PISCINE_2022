/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:42:05 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/13 16:16:01 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int line)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == line -1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	ft_side(int column, int line)
{
	int	i;
	int	j;

	j = 0;
	while (j < column -2)
	{
		ft_putchar('B');
		i = 0;
		while (i < line -2)
		{
			ft_putchar(' ');
			i++;
		}
		j++;
		if (line > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	ft_bot(int column, int line)
{
	int	i;
	int	j;

	i = 0;
	while (i < line && column > 1)
	{
		if (i == 0)
			ft_putchar('C');
		else if (i == line -1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x == 0 || y == 0)
		return ;
	ft_top(x);
	ft_putchar('\n');
	ft_side(y, x);
	ft_bot(y, x);
	if (y > 1)
		ft_putchar('\n');
}
