/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:59:12 by trngo             #+#    #+#             */
/*   Updated: 2023/05/07 18:35:07 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	len;

	len = ft_strlen(str);
	new_str = malloc(len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_memcpy(new_str, str, len);
	new_str[len] = '\0';
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
