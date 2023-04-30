/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:59:12 by trngo             #+#    #+#             */
/*   Updated: 2023/04/30 22:30:39 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(str) + 1;
	new_str = malloc(len);
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_memcpy(new_str, str, len);
	return (new_str);
}
/*
int main()
{
	char *str = "Helloworld";
	char *result;
	result = strdup(str);
	printf("The string : %s\n", result);
	return 0;
}
*/
