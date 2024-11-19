/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:18:03 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/10 02:48:46 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	while (to_trim(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (to_trim(s1[j], set))
		j--;
	return (ft_substr(s1, i, (j - i) + 1));
}

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
