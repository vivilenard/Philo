/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:32:51 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/12 22:42:18 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

int main (int argc, char **argv)
{
    t_struct *s;
    int number;
    
    s = NULL;
    if (argc != 5)
        return (0);
    number = ft_atoi(argv[1]);
    s = initstruct(argv, number);
    if (!s)
        return (0);
    cometothetable(s);
    agreement(s);
    return(0);
}