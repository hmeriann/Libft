/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:44:29 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/02 19:57:22 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	src_len;
// 	size_t	dst_len;
// 	size_t	i;s

// 	i = 0;
// 	src_len = ft_strlen((char *)src);
// 	dst_len = ft_strlen((char *)dst);
// 	if (dstsize == 0)
// 		return (dst_len);
// 	if (dst_len + src_len <= dstsize - 1)
// 		return (dst_len + src_len);
// 	while (src_len + i < dstsize - 1)
// 	{
// 		dst[dst_len + i] = src[i];
// 	}
// 	dst[dst_len + i] = '\0';
// 	return (src_len + dst_len);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	will_append;
// 	size_t	j;

// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	will_append = dstsize - src_len - 1;
// 	if (dstsize == 0 || dst_len > dstsize)
// 		return (0);
// 	j = 0;
// 	while (j <= will_append && src[j])
// 	{
// 		dst[dst_len + j] = src[j];
// 		j++;
// 	}
// 	dst[dst_len + j] = '\0';
// 	return (dst_len + src_len);
// }

// {
// 	char	*tmp_dst;
// 	char	*tmp_src;
// 	size_t	res_size;
// 	size_t	dlen;

// 	tmp_dst = (char *)dst;
// 	tmp_src = (char *)src;
// 	res_size = dstsize;
// 	while (res_size-- != 0 && *dst != '\0')
// 		tmp_dst++;
// 	dlen = tmp_dst - dst;
// 	res_size = dstsize - dlen;
// 	if (res_size == 0)
// 		return (dlen + ft_strlen(tmp_src));
// 	while (*tmp_src != '\0')
// 	{
// 		if (res_size != 1)
// 		{
// 			*tmp_dst++ = *tmp_src;
// 			res_size--;
// 		}
// 		tmp_src++;
// 	}
// 	*tmp_dst = '\0';
// 	return (dlen + (tmp_src - src));
// }

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
