/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruiz-al <pruiz-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:35:20 by pruiz-al          #+#    #+#             */
/*   Updated: 2024/07/24 21:24:35 by pruiz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_number(int n)
{
	int res = 0;
	if (n <= 0)
	{
		n = -n;
		res++;
	}
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
	char	*str = malloc(sizeof(char) * (ft_number(nbr) + 1));
	if (!str)
		return (NULL);
	int i = ft_number(nbr);
	str[i] = '\0';
 	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
		
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		i--;
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return(str);
}

int main()
{
	int n = -23456;
	char *str = ft_itoa(n);
	printf("%s", str);
	return (0);
}