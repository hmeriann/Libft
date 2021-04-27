/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:34:37 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 16:03:07 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The memmove() function copies len bytes from string src to string dst.
 * The two strings may overlap; the copy is always done
 * in a non-destructive manner.
 **/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if ((char *)tmp_src == (char *)tmp_dst)
		return ((char *)dst);
	else if (tmp_src < tmp_dst)
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			tmp_dst[i] = tmp_src[i];
			i--;
		}
	}
	return ((char *)dst);
}
