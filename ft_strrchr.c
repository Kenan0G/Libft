/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:56:38 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 15:06:01 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;
	
	i = ft_strlen(s);
	pointer = (char *)s;
	while (i != -1)
	{
		if (s[i] == c)
			return (&pointer[i]);
		i--;
	}
	return (0);
}

int main()
{
	printf("resultat : %s\n", ft_strrchr("i", 'i'));
	return (0);
}
