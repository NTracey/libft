/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:19:25 by trngo             #+#    #+#             */
/*   Updated: 2023/04/20 21:01:55 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int main()
{
	char product_code[] = "100-440-0.750-3434-A";
	char *substr = substring(product_code, 4, 3);
	printf("Part: %s\n", substr);
	return 0;
}
*/
