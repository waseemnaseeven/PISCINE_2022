/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnaseeve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:47:53 by wnaseeve          #+#    #+#             */
/*   Updated: 2022/08/28 14:20:33 by wnaseeve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*ft_find(char *dict, char *str);
char	*ft_dizaine(char *str);
char	*ft_print_value(char *new_str);
char	*ft_findone(char *dict, char str);
int		ft_atoi(char *str);
void	write_numbers(char *dict, char *tab);

int	main(int argc, char **argv)
{
	//char	*tab;
	char	buf[4097];
	int	fd;
	int	ret;
	
	/*if (ft_atoi(nbr) == 667)
	{
		write (1, "error\n", 6);
		return (0);
	}*/
	ret = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, buf, 4096);
	buf[ret] = '\0';
	if (argc == 2 || argc == 3)
		write_numbers(buf, argv[argc - 1]);
	write(1, "\n", 1);
	/*while (nbr[i])
	{
		ft_print_value(ft_findone(buf,nbr[i]));
		if (i % 2 == 0)
		{
			ft_print_value(ft_find(buf, ft_dizaine(nbr)));
		}
		i++;
			
	}*/
	/*if (fd != -1)
		close;*/
		
}
