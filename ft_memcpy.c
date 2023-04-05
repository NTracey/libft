/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:48:32 by trngo             #+#    #+#             */
/*   Updated: 2023/04/04 20:06:32 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*new_dest;
	const char		*new_src;

	new_dest = dest;
	new_src = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (new_dest);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "dog";
	char dest[] = "cat";

	printf("Dest before: %s\n", dest);
	ft_memcpy(dest, src, 1);
	printf("Dest after: %s\n", dest);
	ft_memcpy(dest, src, sizeof(src));
	printf("Dest after: %s\n", dest);
	return (0);
}
*/
