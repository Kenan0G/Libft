/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:28:53 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 11:07:42 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str2;

	i = 0;
	str = dest;
	str2 = src;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char	chaine[20] = "salut"; //marche pas quand j'ecrit : char *chaine = "salut"; 
	char	*chaine2 = "une phrase test";

	ft_memcpy(chaine, chaine2, 16);
	printf("resultat :%s\n", chaine);
	return (0);
}
