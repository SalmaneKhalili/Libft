/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:58:01 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/27 11:41:54 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_len;
	char	*new_str;
	char	*head;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(new_len + 1);
	head = new_str;
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, ft_strlen(s1));
	new_str += ft_strlen(s1);
	ft_strlcpy(new_str, s2, ft_strlen(s2) + 1);
	return (head);
}
