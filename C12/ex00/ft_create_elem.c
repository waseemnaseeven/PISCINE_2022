#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#include "ft_list.h"

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);

}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int main (void)
{
	t_list *list;

	list = NULL;

	list = ft_create_elem("toto\n");
	list = ft_create_elem("tutu\n");

	print_list(list);
}
