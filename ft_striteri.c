/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:51:17 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/14 23:46:57 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	func_test(unsigned int i, char *s)
{
	int					j;

	j = 0;
	i = 1;
	if (s[j])
		s[j] = s[j] + i;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int					i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main ()
{
	char src[]="";

	ft_striteri(src, func_test);
	printf ("%s", src);
}*/
