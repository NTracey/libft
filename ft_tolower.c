/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:38:22 by trngo             #+#    #+#             */
/*   Updated: 2023/03/22 15:43:34 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
    printf("lowercase of c is: %c\n", ft_tolower('c'));
    printf("lowercase of A is: %c\n", ft_tolower('a'));
    return (0);
}
*/
