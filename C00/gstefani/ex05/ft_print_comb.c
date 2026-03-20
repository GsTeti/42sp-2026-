/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 09:55:18 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/02 09:41:15 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_separacao(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b +1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_separacao(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_separacao(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
