/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:46:15 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/23 16:59:36 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*tmp_s;
	size_t				i;

	tmp_s = (unsigned const char *)s;
	i = 0;
	while ((i < n || tmp_s[i] != (unsigned char)c) && tmp_s[i] != '\0')
		i++;
	return ((unsigned char *)&s[i]);
}
