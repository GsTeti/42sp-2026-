/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:58:54 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/05 16:50:18 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int main() {
	ft_print_numbers();
	return 0;
}
*/
