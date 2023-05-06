/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:59:12 by trngo             #+#    #+#             */
/*   Updated: 2023/05/06 17:45:24 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;

	new_str = malloc(ft_strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	if (new_str != NULL)
		strcpy(new_str, str);
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
