/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:30:05 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/23 13:34:02 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n != 0)
	{
		tmp[n - 1] = c;
		n--;
	}
	return s;
}

// int					main(void)
// {
// 	char			arr[];

// 	arr = "123456789";
// 	printf("%s\n", ft_memset(arr, 'c', 4));
// 	return 0;
// }
