/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:41:20 by hmeriann          #+#    #+#             */
/*   Updated: 2021/04/27 14:11:25 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int sum1;
	int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (s1[i] != '\0')
	{
		sum1 = sum1 + s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		sum2 = sum2 + s2[i];
		i++;
	}
	return (unsigned int)(sum1 - sum2);
}
