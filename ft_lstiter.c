#include "libft.h"
/* итерирует по каждому элементу списка и применяет к контенту каждого элемента функцию 'f'*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}