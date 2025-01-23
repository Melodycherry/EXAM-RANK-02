/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:06:00 by mlaffita          #+#    #+#             */
/*   Updated: 2025/01/19 17:50:24 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

void print_word(char *str, int start, int end)
{
    while (start < end)
        write(1, &str[start++], 1);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    char *str = argv[1];
    int i = 0, start = 0, end = 0, first_word_end = 0;
    int first_word_start = 0, has_word = 0, first_word_printed = 0;

    // Skip leading spaces
    while (str[i] && is_space(str[i]))
        i++;

    // Find the first word
    first_word_start = i;
    while (str[i] && !is_space(str[i]))
        i++;
    first_word_end = i;

    // Skip spaces after the first word
    while (str[i] && is_space(str[i]))
        i++;

    // Print remaining words
    while (str[i])
    {
        if (!is_space(str[i]))
        {
            has_word = 1;
            start = i;
            while (str[i] && !is_space(str[i]))
                i++;
            end = i;
            if (first_word_printed)
                write(1, " ", 1);
            print_word(str, start, end);
            first_word_printed = 1;
        }
        else
            i++;
    }

    // Print the first word
    if (first_word_printed)
        write(1, " ", 1);
    print_word(str, first_word_start, first_word_end);
    write(1, "\n", 1);

    return (0);
}
