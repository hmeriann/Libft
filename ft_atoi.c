/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmeriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:56:32 by hmeriann          #+#    #+#             */
/*   Updated: 2021/02/09 14:23:27 by hmeriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int j;
	int number;

	i = 0;
	j = 0;
	number = 0;
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			j++;
		}
        i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	if (j % 2 == 1)
		number = -number;
	return (number);
}
