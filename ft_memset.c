/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:30:49 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/08 15:56:38 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

int	main()
{
	char	chaine[50] = "salut";
	int		valeur;
	size_t	count;

	valeur = '.';
	count = 2;
	ft_memset(chaine, valeur, count);
	printf("%s\n", chaine);
	return (0);
}
