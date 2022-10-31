/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:04:11 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/27 22:51:28 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int				i;
	int				fact;
	long		rst;

	i = 0;
	fact = 1;
	rst = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && str[i+1] != '-')
			fact = fact * (-1);
		else if ((str[i + 1] <= 48 && str[i + 1] >= 57) || (str[i + 1] == '-' || str[i + 1] == '+'))
			return (0);
		i++;
	}
	if (str[i] != '\0')
	{
		while(str[i] >= 48 && str[i] <= 57 )
		{
			rst = (rst * 10) + fact * (str[i] - 48);
			i++;
			if( rst > INT_MAX)
				return (-1);
			if ( rst < INT_MIN)
				return (0);
		}
		return (rst);
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_atoi("-98765abc"));
	printf("%d\n",    atoi("-98765abc"));
}
