/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:19:59 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/14 11:57:38 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_nbrlen(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*res;

	count = ft_nbrlen(n);
	res = malloc(sizeof(*res) * (count + 1));
	if (!res)
		return (0);
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		res[count - 1] = (n % 10) + '0';
		n = n / 10;
		count--;
	}
	return (res);
}

/*
int	main()
{
	printf("resultat :[%s]\n", ft_itoa(-5845));
	return (0);
}
*/