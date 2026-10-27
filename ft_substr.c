/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:08:25 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/19 09:28:21 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	sub_len = ft_strlen(s) - start + 1;
	if (ft_strlen(s) <= start)
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len < sub_len)
		sub_len = len + 1;
	sub = malloc(sub_len);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len);
	return (sub);
}
