/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:10:30 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/18 20:38:47 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && word == 0)
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && word == 1)
			str[i] = str[i] + 32;
		if (!(is_alphanum(str[i])))
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
