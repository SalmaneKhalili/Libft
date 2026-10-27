/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:33:22 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/16 17:16:11 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const unsigned char	*head;
	unsigned char		*current;

	if (s1 == s2)
		return (s1);
	head = s2;
	current = s1;
	while (n--)
		*current++ = *head++;
	return (s1);
}
