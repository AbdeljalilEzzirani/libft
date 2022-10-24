/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:39 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/23 11:13:43 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
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
	c = 90;
	k = ft_toupper(c);

	printf ("hadii deyalii : %c\n", k);

	int		l;
	char H;
	l = 90;
	H = toupper(l);
	printf ("hadii deyalii : %c\n", H);
}
