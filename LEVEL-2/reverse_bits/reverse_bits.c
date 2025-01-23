/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemont <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:36:00 by pdemont           #+#    #+#             */
/*   Updated: 2024/11/07 22:55:12 by pdemont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char swapped = ((octet & 0x0F) << 4) | ((octet & 0xF0) >> 4);

	unsigned char reversed_msb = ((swapped & 0x10) << 3) |
								 ((swapped & 0x20) << 1) |
								 ((swapped & 0x40) >> 1) |
								 ((swapped & 0x80) >> 3);
	unsigned char reversed_lsb = ((swapped & 0x01) << 3) |
								 ((swapped & 0x02) << 1) |
								 ((swapped & 0x04) >> 1) |
								 ((swapped & 0x08) >> 3);
	return (reversed_msb | reversed_lsb);
}