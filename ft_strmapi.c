/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:42:09 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/12 16:11:40 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					i;
	char				*dst;

	i = ft_strlen(s);
	dst = (char *) malloc (sizeof(char) * i);
	if (dst == NULL)
		return (NULL);
	while (i < 0)
	{
		dst[i] = s[i];
		i--;
	}
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}

int main ()
{
	char			p[]="hello world !";;
	char			str;
	int				c;

	str = ft_strmapi(p, ft_isalpha(c));
	printf ("%c\n", str);
}
