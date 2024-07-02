#include <stdio.h>

/**
 * main - imprime el nombre del programa
 * @argc: número de argumentos de la línea de comandos (no se usa)
 * @argv: arreglo de punteros a los argumentos de la línea de comandos
 *
 * Return: 0 al finalizar correctamente
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
