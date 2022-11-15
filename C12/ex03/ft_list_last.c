#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);

}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *node;

	node = begin_list;
	if (node)
	{
		while (node->next)
			node = node->next;
		return (node);
	}
	return (NULL);
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d\n", *(int *)list->data);
		list = list->next;
	}
}

int main() 
{
  t_list *head;
  int a = 6;
  int b = 6;
  int c = 7;
  void* ptr = &a;
  void* pt = &b;
  void* p = &c;
  head = (t_list *)malloc(sizeof(t_list));
  head = ft_create_elem(ptr);
  head->next = ft_create_elem(pt);
  head->next->next = ft_create_elem(p);
  //display(head);
  print_list(ft_list_last(head));
  return 0;
}
