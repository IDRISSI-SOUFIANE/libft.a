/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:41:54 by sidrissi          #+#    #+#             */
/*   Updated: 2024/11/15 22:13:24 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c);
static int	is_sep(char s, char c);
static char	*fill_word(char const *s, int *preffix, char c);
static void	*ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	char	**word_arr;
	int		number_words;
	int		i;
	int		preffix;

	if (!s)
		return (NULL);
	preffix = 0;
	number_words = word_count(s, c);
	word_arr = (char **)ft_calloc((number_words + 1), sizeof(char *));
	if (!word_arr)
		return (NULL);
	i = 0;
	while (i < number_words)
	{
		word_arr[i] = fill_word(s, &preffix, c);
		if (!word_arr[i])
			return (ft_free(word_arr, i));
		i++;
	}
	word_arr[i] = NULL;
	return (word_arr);
}

int	word_count(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (!is_sep(s[i], c))
		{
			words++;
			while (s[i] && !is_sep(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (words);
}

int	is_sep(char s, char c)
{
	return (s == c);
}

char	*fill_word(char const *s, int *preffix, char c)
{
	char	*word;
	int		i;
	int		len_word;

	len_word = 0;
	i = *preffix;
	while (s[i] && is_sep(s[i], c))
		i++;
	*preffix = i;
	while (s[i] && !(is_sep(s[i], c)))
	{
		len_word++;
		i++;
	}
	word = ft_calloc((len_word + 1), sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len_word)
		word[i++] = s[(*preffix)++];
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

#include <libc.h>
void v(){
	
	
}
int main(){
	atexit(v);
	char **res = ft_split(NULL , ' ');
	if (!res)
	 printf("s is null" );
}