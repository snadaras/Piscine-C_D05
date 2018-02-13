/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/18 17:30:37 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int number;
	int neg;

	i = 0;
	number = 0;
	neg = 0;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (number == 214748364 && str[i] == 8)
			return (-2147483648);
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-number);
	else
		return (number);
}
