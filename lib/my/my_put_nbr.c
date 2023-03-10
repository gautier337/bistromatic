/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** print number
*/

void my_putchar(char c);

int my_isneg(int nb);

int my_put_dig(int dig)
{
    dig = dig + 48;
    my_putchar(dig);
    return 0;
}

static void decomp_nbr(long nb)
{
    long tmp_nbr;

    if (nb >= 10) {
        tmp_nbr = nb / 10;
        decomp_nbr(tmp_nbr);
        my_put_dig(nb % 10);
    } else {
        my_put_dig(nb);
    }
}

int my_put_nbr(int nb)
{
    long longnb = nb;

    if (my_isneg(nb)) {
        my_putchar('-');
        longnb = longnb * -1;
    }
    decomp_nbr(longnb);
    return 0;
}
