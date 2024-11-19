/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:24:10 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/15 14:55:35 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill(char *arr_itoa, long num, int i);
static int	n_digit(int n);

char	*ft_itoa(int n)
{
	char	*arr_itoa;
	int		len_itoa;
	int		i;
	long	num;

	num = n;
	if (num >= 0)
		len_itoa = n_digit(n);
	else
		len_itoa = n_digit(n) + 1;
	arr_itoa = ft_calloc((len_itoa + 1), sizeof(char));
	if (!arr_itoa)
		return (NULL);
	if (num < 0)
	{
		arr_itoa[0] = '-';
		num = -num;
	}
	i = len_itoa - 1;
	return (ft_fill(arr_itoa, num, i));
}

static int	n_digit(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_fill(char *arr_itoa, long num, int i)
{
	while (i >= 0 && arr_itoa[i] != '-')
	{
		arr_itoa[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (arr_itoa);
}
int main()
{
	printf("%s\n",ft_itoa(0));
	return 0;
}