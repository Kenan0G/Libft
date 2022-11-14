/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:44:36 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/12 13:28:34 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*strbig;

	i = 0;
	j = 0;
	strbig = (char *)big;
	if (*little == '\0')
		return (strbig);
	while (strbig[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == strbig[i])
		{
			if (little[j + 1] == '\0')
				return (&strbig[i - j]);
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
