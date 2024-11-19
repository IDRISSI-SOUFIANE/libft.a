/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:31:37 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/15 15:14:02 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	if (src && dstsize)
	{
		i = 0;
		while (dst[i])
			i++;
		j = 0;
		while (src[j] && i < (dstsize - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return ((len_dst) + (len_src));
}
int main()
{
	printf("%zu\n",strlcat(NULL, "moooo", 0));
	return 0;
}