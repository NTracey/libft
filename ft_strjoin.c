/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:55:13 by trngo             #+#    #+#             */
/*   Updated: 2023/04/20 20:12:24 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_s1;

	i = 0;
	j = 0;
	new_s1 = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2)
		return (NULL);
	if (!new_s1)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_s1[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_s1[i] = s2[j];
		i++;
		j++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}
/*
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "world!";
	char *result = ft_strjoin(s1, s2);

	if (strcmp(result, "Hello world!") == 0)
		printf("Test 1 passed\n");
	else
		printf("Test 1 failed\n");

	free(result);

	s1 = "This is a ";
	s2 = "test";
	result = ft_strjoin(s1, s2);

	if (strcmp(result, "This is a test") == 0)
		printf("Test 2 passed\n");
	else
		printf("Test 2 failed\n");
	free(result);

	return 0;
}
*/
