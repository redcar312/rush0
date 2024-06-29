/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:24:38 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/06/29 15:48:02 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void    ft_putchar(char oArr[], char pArr[], int x, int y)
{
        int     i;

        i = 1;
        while(i <= y)
        {
                if (i == 1)
                {
                        write(1, oArr, x);
                        i++;
                }
                else if (i == y)
                {
                        write(1, "\n", 1);
                        write(1, oArr, x);
                        i++;
                }
                else
                {
                        write(1, "\n", x);
                        write(1, pArr, x);
                        i++;
                }
        }
}

