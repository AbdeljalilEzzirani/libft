/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:42:09 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 17:32:59 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	func_west_func(unsigned int i, char s)
{
	i = 1;
	if (s >= 0 && s <= 127)
		s = s + i;
	return (s);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					i;
	char				*dst;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	dst = (char *) malloc (sizeof(char) * i + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int main ()
{
	char			p[]="A B C D !";

	printf ("%s\n", ft_strmapi(p, func_west_func));
}*/
