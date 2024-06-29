/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushX0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:18:50 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/06/29 15:47:31 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

extern void rushX0(int x ,int y)
{
        char    oArr[x];
        char    pArr[x];
        int     i;

        i = 0;
        while (i < x)
        {
                if(i == 0 || i == x - 1) {
                        oArr[i] = 'o';
                        pArr[i] = '|';
                        i++;
                }
		 else
                {
                        oArr[i] = '-';
                        pArr[i] = ' ';
                        i++;
                }
        }
        ft_putchar(oArr, pArr, x, y);
}

