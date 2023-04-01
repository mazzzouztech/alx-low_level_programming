#include <unistd.h>

int main(void)
{
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(msg) - 1; // Ne pas compter le caractère nul à la fin

    // Utiliser le descripteur 2 (stderr) de la fonction write() pour écrire le message d'erreur
    write(2, msg, len);

    return 1;
}

