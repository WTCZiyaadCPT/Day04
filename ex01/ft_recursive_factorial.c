/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdecaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:17:15 by zdecaire          #+#    #+#             */
/*   Updated: 2020/07/13 16:51:45 by zdecaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial (int nb) {
	if (nb == 0) {
		return (1);
	}
	if (nb < 0){
		return (0);
	}
	return (nb * ftUrecursive_factorial(nb-1));
}
