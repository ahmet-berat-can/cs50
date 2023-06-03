#include <stdio.h>
#include <cs50.h>

// Tamamen estetik açıdan biz fonksiyonları aşağıda tanımladığımız için main fonksiyonu tanımları bulamadı.
// Bunu ortadan kaldırmak için main fonksiyonuna girmeden bu fonksiyon tanımlarını çağırarak sorunu çözüyoruz
// Yoksa tanımladığımız fonksiyonları yukarıda alsak bu sorunu çözerdi.

int get_size(void);
void print_grid(int n);

int main void()
{
    // get size of grid
    int n = get_size();

    // Print grid of briks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);

    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n ; n ++)
    {
        for(int j = 0; j < n ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}