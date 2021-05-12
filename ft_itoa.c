/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <hmeriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:44:31 by hmeriann          #+#    #+#             */
/*   Updated: 2021/05/12 20:43:24 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	size_maker(int n)
{
	long int	tmp_n;

	tmp_n = 0;
	while (n > 0)
	{
		if (n == 0)
			return (1);
		n /= 10;
		tmp_n++;
	}
	return (tmp_n);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			sign;
	int			i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	if (n < 0)
		sign = 1;
	result = (char *)malloc((size_maker(n) + sign + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[size_maker(n) + sign] = '\0';
	i = size_maker(n) + sign;
	while (n > 0)
	{
		result[--i + sign] = n % 10 + '0';
		n = n / 10;
	}
	if (sign < 0)
		result[0] = '-';
	return (result);
}
