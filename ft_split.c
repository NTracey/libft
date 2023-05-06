/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trngo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:57:49 by trngo             #+#    #+#             */
/*   Updated: 2023/05/06 18:31:49 by trngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
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
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == 0)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		result[i] = get_next_word(s, c);
		if (!result[i])
			return (NULL);
		s += strlen(result[i]);
		i++;
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
