/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:06:32 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/23 17:24:44 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*tmp_s1;
	unsigned const char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (n-- > 0 && *tmp_s1 == *tmp_s2)
		tmp_s1++, tmp_s2++;
	return (*tmp_s1 - *tmp_s2);
}
