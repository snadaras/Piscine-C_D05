/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/18 15:14:25 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n != 0 && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	if (n != 0)
		return (*s1 - *s2);
	return (0);
}
