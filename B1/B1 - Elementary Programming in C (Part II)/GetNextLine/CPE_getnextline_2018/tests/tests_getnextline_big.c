/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

int fd = -1;

void open_file(void)
{
    fd = open("files/big_data.txt", O_RDONLY);
    cr_redirect_stdout();
}

void close_file(void)
{
    if (fd != -1)
        close(fd);
}

Test(get_next_line, read_multiple_line, .init = open_file, .fini = close_file)
{
    char *expected = "Et quia Montius inter dilancinantium manus spiritum eff"\
    "laturus Epigonum et Eusebium nec professionem nec dignitatem ostendens a"\
    "liquotiens increpabat, qui sint hi magna quaerebatur industria, et nequi"\
    "d intepesceret, Epigonus e Lycia philosophus ducitur et Eusebius ab Emis"\
    "sa Pittacas cognomento, concitatus orator, cum quaestor non hos sed trib"\
    "unos fabricarum insimulasset promittentes armorum si novas res agitari c"\
    "onperissent.";
    char *got = get_next_line(fd);
    cr_assert_str_eq(got, expected);

    got = get_next_line(fd);

    expected = "Cognitis enim pilatorum caesorumque funeribus nemo deinde ad "\
    "has stationes appulit navem, sed ut Scironis praerupta letalia declinant"\
    "es litoribus Cypriis contigui navigabant, quae Isauriae scopulis sunt co"\
    "ntroversa.";
    got = get_next_line(fd);
    cr_assert_str_eq(got, expected);
}

Test(get_next_line, one_big_line_bigfile, .init = open_file, .fini = close_file)
{
    char *got = NULL;

    for (int i = 0; i < 11; i++)
        got = get_next_line(fd);

    char *expected = "Montius nos tumore inusitato quodam et novo ut rebellis"\
    " et maiestati recalcitrantes Augustae per haec quae strepit incusat irat"\
    "us nimirum quod contumacem praefectum, quid rerum ordo postulat ignorare"\
    " dissimulantem formidine tenus iusserim custodiri.";
    cr_assert_str_eq(got, expected);
}