/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:18:51 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/14 15:36:31 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = malloc(sizeof(*dest) * (nmemb * size + 1));
	if (!dest)
		return (NULL);
	ft_bzero(dest, (size * nmemb) + 1);
	return (dest);
}
