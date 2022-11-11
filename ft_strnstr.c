/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:44:36 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/11 11:24:34 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>

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



int main()
{
	printf("%s\n",ft_strnstr("phrrase test phrase", "test", 10));
	return (0);

}
