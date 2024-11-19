/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:38:24 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/15 15:31:05 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	cc;

	len = ft_strlen(s);
	cc = (char)c;
	while (len >= 0)
	{
		if (s[len] == cc)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
int main()
{
	printf("%s\n",strrchr("moh\0hh", '\0'));
	
}