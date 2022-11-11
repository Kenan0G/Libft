/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:51:21 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/09 10:54:27 by kgezgin          ###   ########.fr       */
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
	char	chaine[50] = "salut"; //marche pas quand j'ecrit : char *chaine = "salut"; 
	char	*chaine2 = "o";

	ft_memcpy(chaine, chaine2, 1);
	printf("resultat :%s\n", chaine);
	return (0);
}