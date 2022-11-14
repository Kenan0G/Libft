/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:22:31 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/12 13:26:41 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*pointer;

	i = 0;
	pointer = (char *)s;
	while (pointer[i] != '\0' && i < n)
	{
		if (pointer[i] == c)
			return (&pointer[i]);
		i++;
	}
	return (0);
}
