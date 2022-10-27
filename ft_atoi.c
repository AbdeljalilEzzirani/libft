/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:04:11 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/27 19:52:01 by abez-zir         ###   ########.fr       */
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
	while (str[i] == '-' || str[i] == '+' || str[i] <= 32)
	{
		if (str[i] == '-' && str[i+1] != '-')
			fact = fact * (-1);
		else if (str[i + 1] == '-')
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
	while (str[i] <= 32)
		i++;
	return (0);
}

int main()
{
	printf("%d\n", ft_atoi("-99999"));
	printf("%d\n",    atoi("-99999"));

}
