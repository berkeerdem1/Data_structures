

#include <iostream>

void İnsertionSort(int* sayilar, int uzunluk)
{
    int i;
    for (int j = 1;j < uzunluk;j++) {
        int secilen = sayilar[j];
        for (i = j - 1;(i >= 0) && (sayilar[i] > secilen);i--) 
            {
                sayilar[i + 1] = sayilar[i];

            }
            sayilar[i + 1] = secilen;
        }

    }
