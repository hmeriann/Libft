#include "libft.h"
#include <stdio.h>
/* принимает элемент, память, выделенную под контента которого нужно освободить, не трогает цепочку next*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (NULL == lst)
		return ;
	if (del)
		del(lst -> content);
	free(lst);
}