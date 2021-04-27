/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:28:01 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*tmp_s1;
	char	*tmp_s2;
	size_t	i;

	tmp_s1 = (char *)s1;
	tmp_s2 = (char *)s2;
	i = 0;
	while (i < n || *tmp_s1 != '\0' || *tmp_s2 != '\0')
	{
		while (tmp_s1 == tmp_s2)
			tmp_s1++, tmp_s2++;
		if (tmp_s1[i] > tmp_s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}
