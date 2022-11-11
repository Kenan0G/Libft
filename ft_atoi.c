/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:57:42 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/11 12:04:24 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(const char*nptr)
{
	int		res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t'
		|| nptr[i] == '\v')
		i++;
	if (nptr[i] == '-')
		sign = -1;
	else if (nptr[i] == '+')
		sign = 1;
	i++;
	if (nptr[i] < 48 && nptr[i] > 57)
		return (0);
	while ((nptr[i] > 47 && nptr[i] < 58))
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * res);
}


int	main()
{
	int	var;
	int var2;
	char *str = "-k10";

	var = atoi(str);
	var2 = ft_atoi(str);

	printf("mon atoi donne :%d\n", var2);
	printf("le vrai atoi donne :%d\n", var);

	return (0);
}

