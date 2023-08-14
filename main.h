#include <cstdint>
namespace speedtest
{
    void sort(uint32_t arr[], int n);
    void swap(uint32_t &a, uint32_t &b);
    void rand_n(uint32_t numbers[], int size);

    void sort(uint32_t arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)

            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
    }

    void swap(uint32_t &a, uint32_t &b)
    {
        uint32_t t = a;
        a = b;
        b = t;
    }

    void rand_n(uint32_t numbers[], int size)
    {
        srand(time(0));
        for (int i = 0; i < size; i++)
        {
            numbers[i] = rand() % size*size*size;
        }
    }
}
