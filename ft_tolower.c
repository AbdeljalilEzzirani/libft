/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:45:59 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/23 11:09:09 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
	return (0);
}

int	main ()
{
	char k;
	int		c;
	c = 122;
	k = ft_tolower(c);

	printf ("hadii deyalii : %c\n", k);

	int		l;
	char H;
	l = 122;
	H = tolower(l);
	printf ("hadii deyalii : %c\n", H);
}
