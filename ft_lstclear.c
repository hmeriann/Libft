#include "libft.h"
/*удаляет указанный элемент и всех его последователей, пока не станет указывать на NULL*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst) -> next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}