/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:48:50 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/06 18:53:12 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}
