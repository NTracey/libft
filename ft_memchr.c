/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:22:18 by trngo             #+#    #+#             */
/*   Updated: 2023/04/13 18:04:57 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_str;

	new_str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (new_str[i] == (unsigned char)c)
			return ((void *)&new_str[i]);
		i++;
	}
	return (0);
}
