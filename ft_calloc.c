/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:18:51 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/30 13:05:05 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, size * nmemb);
	return (dest);
}
