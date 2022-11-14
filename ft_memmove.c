/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:51:21 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/12 18:45:59 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	char		temp[50];
	const char	*str2;

	i = 0;
	str = dest;
	str2 = src;
	while (i < n)
	{
		temp[i] = str2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str[i] = temp[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char	var1[50] = "salut";
	char	var2[50] = "je";
	char	var3[50] = "salut";
	char	var4[50] = "je";


	ft_memmove(var1, var2, 4);
	memmove(var3, var4, 4);
	printf("[%s]\n", var1);
	printf("[%s]\n", var3);
	return (0);
}