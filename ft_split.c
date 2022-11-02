/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:49:20 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/02 22:13:08 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char function1()
{
	//heeeeeeeeeeeere
}

char	function2()
{
	//this function
}

char	**ft_split(char const *s, char c)
{
	int				i;
	char			**p;
	//char			*ptr;

	p = (char *) malloc ((lent + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p = ft_strtrim(s, c);
	i = 0;
	while (p[i])
	{
		ptr = (char *) malloc ((lent + 1) * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr = ft_substr(s1, i, lent);
		if ()
	}
}

int	main ()
{
	char src[]="__hello__world_how_are_you___";
	char ch="_";
	ft_split(src, ch);
}
