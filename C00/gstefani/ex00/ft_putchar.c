/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:02:09 by gstefani          #+#    #+#             */
/*   Updated: 2026/02/26 09:47:54 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Estrutura do Write:
// (saída padrão, local na memória, numero de bytes)

//Como rodar:
//gcc ft_putchar.c -o main.c
//./main.c

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main() {
	ft_putchar('A');
	ft_putchar('\n');
}
*/
