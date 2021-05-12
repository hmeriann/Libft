/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:16:42 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/12 17:17:04 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*begin;
	char	*end;
	char	*total;
	int		i;
	int		j;

	begin = (char *)s1;
	end = (char *)s2;
	if ((char *)s1 == NULL || (char *)s2 == NULL)
		return (NULL);
	total = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (total == NULL)
		return (NULL);
	i = 0;
	while (begin[i] != '\0')
	{
		total[i] = begin[i];
		i++;
	}
	j = 0;
	while (end[j] != '\0')
	{
		total[i + j] = end[j];
		j++;
	}
	total[i + j] = '\0';
	return (total);
}
