namespace speedtest
{
    void sort(int arr[], int n);
    void swap(int &a, int &b);
    int *rand_n(const int size);

    void sort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)

            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
    }

    void swap(int &a, int &b)
    {
        int t = a;
        a = b;
        b = t;
    }

    int *rand_n(const int size)
    {
        srand(time(0));
        int *numbers = new int[size];
        for (int i = 0; i < size; i++)
        {
            numbers[i] = rand() % 8192;
        }
        return numbers;
    }
}
