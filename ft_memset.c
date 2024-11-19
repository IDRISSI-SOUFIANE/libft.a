/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:57:27 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/15 22:46:11 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	cc;

	s = (unsigned char *)b;
	cc = (unsigned char)c;
	while (len--)
	{
		s[len] = cc;
	}
	return (b);
}
int main(){
char str[]= "ABCD";
int i = 0;
while (str[i])
{
	printf("%c \t %p\n",str[i] , str[i]);
	i++;
}
	printf(" \n%s\n   %p\n",str , str);

	//printf("%s",ft_memset(str , 'B' , 1));
}