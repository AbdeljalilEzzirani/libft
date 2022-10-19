/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:39 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/19 21:27:17 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	else if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	return (0);
}

int	main ()
{
	int		c;
	c = 116;
	ft_toupper(c);
	printf ("hadii deyalii : %c\n", c);

	int		l;
	l = 116;
	ft_toupper(l);
	printf ("hadii deyalii : %c\n", l);
}
