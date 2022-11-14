/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:51:21 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/14 14:12:01 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	char		*temp;
	const char	*str2;

	i = 0;
	str = dest;
	temp = str;
	str2 = src;
	
	while (i < n)
	{
		temp[i] = str2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str[n] = temp[i];
		i++;
		n--;
	}
	return (dest);
	/*
	unsigned char	*t;
	unsigned char	*s;

	if (src == dest || !n)
		return (dest);
	if (dest < src)
	{
		t = (unsigned char *)dest;
		s = (unsigned char *)src;
		while (n--)
			*t++ = *s++;
	}
	else
	{
		t = (unsigned char *)dest + (n - 1);
		s = (unsigned char *)src + (n - 1);
		while (n--)
			*t-- = *s--;
	}
	return (dest);
	*/
}


int	main()
{
	char	var1[50] = "1234567";
	//char	var2[50] = "1234567";
	char	var3[50] = "1234567";
	//char	var4[50] = "1234567";
	size_t n = 4;


	ft_memmove(var1 + 3, var1, n);
	memmove(var3 + 3, var3, n);
	printf("[%s]\n", var1);
	printf("[%s]\n", var3);
	return (0);
}