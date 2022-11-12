/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:49:20 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/08 21:00:47 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_nbr_case_in_tab(char const *s, char c)
{
	int				nbr;
	int				i;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			nbr = nbr + 1;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (nbr);
}

static	void	free_tab(char **s)
{
	int			i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				swap;
	char			**tab;
	int				nbr;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	nbr = count_nbr_case_in_tab(s, c);
	tab = (char **) malloc(sizeof(char *) * (nbr + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] && j < nbr)
	{
		while (s[i] == c)
			i++;
		swap = i;
		while (s[i] != c)
			i++;
		tab[j] = ft_substr(s, swap, (i - swap));
		if (tab[j] == NULL)
		{
			free_tab(tab);
			return (NULL);
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

// int	main ()
// {
// 	char src[]="i__hello__world_how_are_you___";
// 	char			**p;
// 	int				i;

// 	i = 0;
// 	p = ft_split(src, '_');
// 	while (p[i])
// 	{
// 		printf ("%s || ", p[i]);
// 		i++;
// 	}
// 	p[i - 1] = "problem";
// 	i = 0;
// 	printf ("\n");
// 	while (p[i])
// 	{
// 		printf ("%s || ", p[i]);
// 		i++;
// 	}
// }
