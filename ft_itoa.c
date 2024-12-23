/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:52:51 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/25 02:46:13 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*itoa_positive(long n, char *ptr)
{
	int						count;
	long					tmp;
	int						rip;

	count = len_allocation(n);
	rip = count;
	while (count > 0)
	{
		if (n >= 0)
		{
			tmp = n % 10;
			n = n / 10;
			ptr[count - 1] = tmp + 48;
		}
		count--;
	}
	ptr[rip] = '\0';
	return (ptr);
}

char	*itoa_negative(long n, char *ptr)
{
	int						count;
	long					tmp;
	int						rip;

	count = len_allocation(n);
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
	long					cast;
	char					*p;

	cast = n;
	count = len_allocation(cast);
	p = (char *) malloc (sizeof(char) * (count + 1));
	if (p == NULL)
		return (NULL);
	if (cast < 0)
		return (itoa_negative(cast, p));
	if (cast >= 0)
		return (itoa_positive(cast, p));
	return (0);
}
/*
int	main()
{
	printf("%s\n", ft_itoa(-123456789));
}*/
