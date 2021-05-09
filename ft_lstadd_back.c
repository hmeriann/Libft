#include "libft.h"
# include <stdio.h>
/* получает указатель на указатель на начало списка и указатель на новый элемент, добавляет его в конец списка */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

	if (*lst == NULL)
		lst = &new;
	else
	{
		last = ft_lstlast(*lst);
		new -> next = NULL;
		last -> next = new;
	}
}

t_list	*make_test_item()
{
	t_list	*l = ft_lstnew(ft_strdup("nyacat"));
	return (l);
}


int main()
{
	t_list *l1 = make_test_item();
	t_list *l_new = ft_lstnew(ft_strdup("OK"));

	ft_lstadd_back(&l1, l_new);
	while (l1 != NULL)
	{
		printf("%s -> ", (char *)(l1 -> content));
		l1 = l1 -> next;
	}

	return (0);
}