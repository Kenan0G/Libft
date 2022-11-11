/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:00:35 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 14:08:13 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dstsize;

	i = 0;
	dstsize = ft_strlen(dst);
//	printf("dstsize = %ld\n", dstsize);
	while ((i + dstsize < size - 1) && src[i] != '\0')
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
//	printf("dest apres le cat : %s\n", dst);
	return (dstsize + i);
}

int main()
{
	char str1[50] = "test";
	char str2[50] = "ooo";
	size_t size = 3;

	printf("return : %ld\n", ft_strlcat(str1, str2, size));
	
}
