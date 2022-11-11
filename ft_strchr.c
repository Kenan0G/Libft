/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:41:14 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 14:55:50 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pointer;
	
	i = 0;
	pointer = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&pointer[i]);
		i++;
	}
	return (0);
}

int main()
{
	printf("resultat : %s\n", ft_strchr("salut", 'os'));
	return (0);
}
