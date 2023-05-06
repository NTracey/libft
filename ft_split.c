/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:57:49 by trngo             #+#    #+#             */
/*   Updated: 2023/05/06 23:40:54 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		word[i++] = *s;
		s++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	if (!(result = malloc((word_count + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		if (!(result[i] = get_next_word(s, c)))
		{
			while (--i >= 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		s += ft_strlen(result[i++]);
	}
	result[word_count] = NULL;
	return (result);
}
/*
int main(void)
{
	char s[] = "To be, or not to be, that is the question.";
	char **split_strings = ft_split(s, ',');
	for (int i = 0; split_strings[i] != NULL; i++)
		printf("%s\n", split_strings[i]);
	for (int i = 0; split_strings[i] != NULL; i++)
		free(split_strings[i]);
	free(split_strings);
	return 0;
}
*/
