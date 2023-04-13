/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:08:06 by trngo             #+#    #+#             */
/*   Updated: 2023/04/13 17:57:08 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int result;

    char str1[] = "abcd";
    char str2[] = "abCd";
    result = ft_strncmp(str1, str2, 3);
    printf("Results for one differences = %d\n", result);
    result = ft_strncmp(str1, str2, 2);
    printf("Results for no differences = %d\n", result);
}
*/
