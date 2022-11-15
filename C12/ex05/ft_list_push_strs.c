#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#include "ft_list.h"

void	ft_putstr(char *str)
{
	for (int i = 0; str[i]; i++)
		write(1, &str[i], 1);
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*f;

	if (strs)
	{
		f = ft_create_elem((void*)strs[size-1]);
		f->next = ft_list_push_strs(size - 1, strs);
		return (f);
	}
	return (0);
}
void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%s",(char *)list->data);
		list = list->next;
	}
}

int main(int ac, char **av)
{
	t_list *list;

	list = (t_list *)malloc(sizeof(t_list));
	list = ft_list_push_strs(4, av);

	print_list(list);
}
