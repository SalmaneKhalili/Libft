/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:24:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/27 11:42:06 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*new_str;
	char	*head;
	int		i;

	if (f == NULL || s == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	head = new_str;
	i = 0;
	while (s[i])
	{
		*new_str++ = (f)(i, s[i]);
		i++;
	}
	*new_str = '\0';
	return (head);
}
