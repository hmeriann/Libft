/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:30:05 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*end;

	tmp = (unsigned char *)s;
	end = (unsigned char *)(s + n);
	while (tmp < end)
	{
		*tmp = c;
		tmp++;
	}
	return (s);
}

// int					main(void)
// {
// 	char			arr[];

// 	arr = "123456789";
// 	printf("%s\n", ft_memset(arr, 'c', 4));
// 	return 0;
// }
