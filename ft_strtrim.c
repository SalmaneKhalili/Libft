/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:16:35 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/27 11:42:18 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char const	*head;
	char const	*tail;
	size_t		len;
	char		*new_str;

	if (s == NULL || set == NULL)
		return (NULL);
	head = s;
	while (ft_in_set(set, *head))
		head++;
	tail = s + ft_strlen(s);
	while (tail > head && ft_in_set(set, *(tail - 1)))
		tail--;
	len = tail - head;
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, head, len + 1);
	return (new_str);
}
