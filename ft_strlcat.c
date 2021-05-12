/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:44:29 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/12 16:50:09 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (*dst && dstsize > 0)
		dst++, dst_len++, dstsize--;
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return (src_len + dst_len);
}
