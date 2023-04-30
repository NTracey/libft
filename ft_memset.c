/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:31:26 by trngo             #+#    #+#             */
/*   Updated: 2023/04/30 16:36:09 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*new_str;
	size_t			i;

	new_str = str;
	i = 0;
	while (i < len)
	{
		new_str[i] = c;
		i++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "C programming memset function";
    printf( "Before: %s\n", str );
    ft_memset( str, '#', 5 );
    printf( "After:  %s\n", str );
}
*/
