/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 20:08:53 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/05 16:52:45 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else if (n < 0)
	{
		write(1, "N", 1);
	}
}

// int main() {
// 	int n;
// 	printf("Digite um número:\n");
// 	scanf("%d", &n);
// 	ft_is_negative(n);
// 	return 0;
// }
