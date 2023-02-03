/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 03:35:12 by estruckm          #+#    #+#             */
/*   Updated: 2023/02/03 22:31:20 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrr(t_lst **head_ref_1, t_lst **head_ref_2)
{
	ft_rra(head_ref_1);
	ft_rrb(head_ref_2);
	ft_printf("rrr\n");
}
