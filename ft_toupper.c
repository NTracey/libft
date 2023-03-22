/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:35:23 by trngo             #+#    #+#             */
/*   Updated: 2023/03/22 15:38:03 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
    printf("Uppercase of c is: %c\n", ft_toupper('c'));
    printf("Uppercase of A is: %c\n", ft_toupper('A'));
    return (0);
}
*/
