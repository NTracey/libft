/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:50:25 by trngo             #+#    #+#             */
/*   Updated: 2023/04/20 21:56:02 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

static int	trimmed_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_char_in_set(s1[i], set))
		i++;
	return (i);
}

int	trimmed_len(const char *s1, const char *set)
{
	int	len;
	int	first;

	len = ft_strlen(s1);
	first = 0;
	while (is_char_in_set(s1[first], set) && s1[first])
		first++;
	while (is_char_in_set(s1[len - 1], set) && len > first)
		len--;
	return (len - first);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		new_len;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	new_len = trimmed_len(s1, set);
	if (new_len <= 0)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc(sizeof(char) * (new_len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + trimmed_start(s1, set), new_len + 1);
	return (trimmed_str);
}
/*
int main(void)
{
	char s[] = "****This*is the way****";
	printf("Result: %s\n", ft_strtrim(s, "y*"));
	return (0);
}
*/
