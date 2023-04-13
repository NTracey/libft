/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:15 by trngo             #+#    #+#             */
/*   Updated: 2023/04/13 16:49:46 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char s[] = "some,data,in,commas";

    char *comma = ft_strchr(s, ',');
    printf("%s\n", comma);

    char *fail = ft_strchr(s, '@');
    if (fail == NULL)
        printf("Could not find @!\n");

    return 0;
}
*/
