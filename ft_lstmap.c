#include "libft.h"
#include <stdio.h>
/*шагает по листу и применяет функцию f к каждому элементу списка. Из результата применения функции создает новый список. Применяет функцию del, если необходимо*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_element;
	t_list	*new_lst;

	if (!f)
		return (NULL);
	first_element = NULL;
	while (lst)
	{
		new_lst = ft_lstnew((*f)(lst -> content));
		if (!(new_lst))
		{
			while (first_element)
			{
				new_lst = first_element -> next;
				(*del)(first_element -> content);
				free(first_element);
				first_element = new_lst;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first_element, new_lst);
		lst = lst -> next;
	}
	return (first_element);
}

// t_list	*make_test_list()
// {
// 	t_list	*l1 = ft_lstnew(ft_strdup("one"));
// 	t_list	*l2 = ft_lstnew(ft_strdup("two"));
// 	t_list	*l3 = ft_lstnew(ft_strdup("three"));
// 	l1 -> next = l2;
// 	l2 -> next = l3;
// 	return (l1);
// }

// void *f(void *content)
// {
// 	printf("%s\n", content);
// 	content = (void *)strdup("OK");
// 	return (content);
// }

// int main()
// {
// 	t_list *result;
// 	t_list 	*l1 = make_test_list();
// 	result = ft_lstmap(l1, f, NULL);	

// 	while (result != NULL)
// 	{
// 		printf("%s -> ", (char *)(result -> content));
// 		result = result -> next;
// 	}

// 	return (0);
// }