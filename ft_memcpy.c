/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:06:12 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/22 16:34:52 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return dst;
}

// int					main(void)
// {
// 	unsigned int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
// 	unsigned int arr2[] = {7, 7, 7, 7};

// 	printf("%s\n", ft_memcpy(arr1, arr2, 2));
// 	return 0;
// }