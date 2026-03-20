/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:37:35 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/09 18:37:23 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int	main(void)
// {
// 	int	num1;
// 	int	num2;

// 	printf("Digite um numero: ");
// 	scanf("%d", &num1);
// 	printf("\n*************************\n");
// 	printf("\nDigite outro numero: ");
// 	scanf("%d", &num2);
// 	printf("\n*************************\n");
// 	ft_ultimate_div_mod(&num1, &num2);
// 	printf("\nResultado da divisao: %d", num1);
// 	printf("\n\nResultado do resto: %d", num2);
// 	printf("\n\n*************************\n");
// }
