/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:04:11 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/26 19:37:52 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

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
		if (str[i] == '-')
			fact = fact * (-1);
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		rst = (rst * 10) + fact * (str[i] - '0');
		i++;
		if( rst > INT_MAX)
			return (-1);
		if ( rst < INT_MIN)
			return (0);
	}
	return (rst);
}

int main()
{
	printf("%d\n", ft_atoi("999999999999999999999999999"));
	printf("%d\n", atoi("9999999999999999999999999999"));

}
