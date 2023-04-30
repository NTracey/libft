/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:59:53 by trngo             #+#    #+#             */
/*   Updated: 2023/04/30 23:24:03 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_sign(int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	size_t	digits;
	int		sign;
	char	*str;

	i = 0;
	nbr = n;
	digits = count_digits(nbr);
	sign = get_sign(nbr);
	str = (char *)malloc((digits + sign - 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	str[digits] = '\0';
	if (nbr == 0)
		str[0] = '0';
		return (str);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[i--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}
