/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:44:58 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/24 09:49:12 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int num;

	num = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 1)
		nb *= num;
	return (nb);
}
