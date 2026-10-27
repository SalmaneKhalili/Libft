/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:45:54 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/27 11:41:33 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_arr(char **words, int elems)
{
	int	i;

	i = 0;
	while (i < elems)
		free(words[i++]);
	free(words);
	return (NULL);
}

static char	**ft_allocate(char c, char const *s)
{
	char	**words;
	size_t	count;

	count = ft_count_words(s, c);
	words = malloc((count + 1) * sizeof(char *));
	if (words != NULL)
		words[count] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char		**words;
	char const	*head;
	char		**start;

	if (s == NULL)
		return (NULL);
	words = ft_allocate(c, s);
	if (words == NULL)
		return (NULL);
	start = words;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			head = s;
			while (*s && *s != c)
				s++;
			*words++ = ft_substr(head, 0, s - head);
			if (*(words - 1) == NULL)
				return (free_arr(start, (words - start) - 1));
		}
	}
	return (start);
}
