/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:42 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/16 17:18:20 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	total_size;
	char	*arr;

	if (elsize != 0 && nelem > (size_t)-1 / elsize)
		return (NULL);
	else
		total_size = elsize * nelem;
	arr = malloc(total_size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}
