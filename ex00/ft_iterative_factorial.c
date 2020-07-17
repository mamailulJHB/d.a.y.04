/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamailul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 13:57:00 by mamailul          #+#    #+#             */
/*   Updated: 2020/07/17 14:01:14 by mamailul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorialnb;
		nb--;
	}
	return (factorial);
}
