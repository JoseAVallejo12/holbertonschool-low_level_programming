#include<stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int size;
size = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", size);

return (1);
}
