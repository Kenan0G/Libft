/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:11:13 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 12:59:35 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while ((i < size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	printf("dest en fin de fonction est :%s", dst);

	return (size);
}
/*
#include <stddef.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;

    i = 0;
    while (src[i] != '\0' && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
	printf("dest en fin de fonction est :%s\n", dst);
    return (i);
}
*/
int main()
{
	char dst[50];
	const char src[50] = "ooo";
	size_t size = 4;

	printf("return :%ld", ft_strlcpy(dst, src, size));

	return (0);
}
