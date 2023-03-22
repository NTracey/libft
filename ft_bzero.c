/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:17:33 by trngo             #+#    #+#             */
/*   Updated: 2023/03/22 18:31:44 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*new_str;
	unsigned int	i;

	new_str = str;
	i = 0;
	while (new_str[i] && i < len)
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
    char str[] = "C programming memset function";
    printf( "Before: %s\n", str );
    ft_bzero( str, 5 );
    printf( "After:  %s\n", str );
}
*/
