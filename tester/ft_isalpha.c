/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:02:19 by abelfany          #+#    #+#             */
/*   Updated: 2022/10/13 21:10:24 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1;
	return 0;
}
// int main()
// {
// 	char x = 'a';
// 	printf("%d", ft_isalpha(x));
// }