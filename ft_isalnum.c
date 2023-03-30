/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:48:17 by trngo             #+#    #+#             */
/*   Updated: 2023/03/22 18:38:27 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
    printf("Result for 1: %d\n", ft_isalnum('1'));
	printf("Result for a: %d\n", ft_isalnum('a'));
	printf("Result for !: %d\n", ft_isalnum('!'));
	return (0);
}
*/
