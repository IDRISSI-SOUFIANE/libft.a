/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:18:21 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/16 09:58:11 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	// if (size != 0 && count > SIZE_MAX / size)
	// 	return (NULL);
	ptr = malloc((size * count));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
int main()
{
	char *ar;

	ar = ft_calloc(SIZE_MAX, 2);

	printf("%s",  ar );
}