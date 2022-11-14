/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:19:59 by kgezgin           #+#    #+#             */
/*   Updated: 2022/11/14 13:54:58 by kgezgin          ###   ########.fr       */
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
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
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

int	main(void)
{
	printf("resultat :[%s]\n", ft_itoa(2147483647));
	return (0);
}
