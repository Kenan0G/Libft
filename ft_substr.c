/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:35:38 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/14 14:05:14 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(sizeof(*res) * len);
	if (!res)
		return (NULL);
	while (i < (len - 1))				//a revoir le -1
	{
		res[i] = s[start - 1];			//a revoir le -1
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main()
{
	printf("res :%s\n", ft_substr("salutjesuis", 1, 5));
	return (0);
}
*/