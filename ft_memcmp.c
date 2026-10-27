/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:28:54 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/20 09:14:56 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;

	if (!n)
		return (0);
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	while (n && *s11++ == *s22++)
		n--;
	return (*--s11 - *--s22);
}
