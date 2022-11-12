/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:48:18 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/11 19:51:23 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>

int	len_allocation(long nbr)
{
	int					count;

	count = 0;
	if (nbr == 0)
		return (count + 1);
	if (nbr < 0)
	{
		nbr *= (-1);
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*allocation(long nbr)
{
	char				*p;
	int					count;

	count = len_allocation(nbr);
	p = (char *) malloc (sizeof(char) * (count + 1));
	if (p == NULL)
		return (NULL);
	return (p);
}

char	*itoa_negative(long n)
{
	int						count;
	long					tmp;
	int						rip;
	char					*ptr;

	count = len_allocation(n);
	ptr = allocation(n);
	rip = count;
	while (count > 1)
	{
		if (n < 0)
			n = n * (-1);
		tmp = n % 10;
		n = n / 10;
		ptr[count - 1] = tmp + 48;
		ptr[0] = '-';
		count--;
	}
	ptr[rip] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int						count;
	long					tmp;
	int						rip;
	long					cast;
	char					*p;

	cast = n;
	if (cast < 0)
		return (itoa_negative(cast));
	count = len_allocation(cast);
	p = allocation(n);
	rip = count;
	while (count > 0)
	{
		if (cast >= 0)
		{
			tmp = cast % 10;
			cast = cast / 10;
			p[count - 1] = tmp + 48;
		}
		count--;
	}
	p[rip] = '\0';
	return (p);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(-123456789));
}*/
