/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:22:31 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 17:17:35 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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


int main()
{
	char *str;

	str = ft_memchr("salut", 'u', 2);
	printf("%s\n", str);
	return (0);
}
