/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:17:33 by trngo             #+#    #+#             */
/*   Updated: 2023/04/30 16:37:25 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*new_str;
	size_t			i;

	new_str = str;
	i = 0;
	while (i < len)
	{
		new_str[i] = 0;
		i++;
	}
	return ;
}
/*
#include <stdio.h>
int main()
{
    char str[] = "C programming bzero function";
    printf( "Before: %s\n", str );
    ft_bzero( str, 5 );
    printf( "After:  %s\n", str );
}
*/
