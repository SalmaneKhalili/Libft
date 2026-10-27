/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:19:10 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/20 09:14:52 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned const char	*head;
	unsigned char		*current;

	if (n == 0 || s1 == s2)
		return (s1);
	head = (unsigned const char *)s2;
	current = (unsigned char *)s1;
	if (current > head)
	{
		while (n--)
			current[n] = head[n];
	}
	else
	{
		ft_memcpy(s1, s2, n);
	}
	return (s1);
}
