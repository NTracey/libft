/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:53:59 by trngo             #+#    #+#             */
/*   Updated: 2023/04/13 17:58:33 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (ft_strlen(src));
	}
	while (i < (n - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
    char src[] = "Hello, world!";
    char dest[9];

    printf("Before strlcpy:\n");
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    ft_strlcpy(dest, src, 5);

    printf("After strlcpy:\n");
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}
*/
