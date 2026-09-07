int findResult(int x, int n) {

    int sum = 0;

    printf("%d", sum);

    int power = 2;
    while (power < n)
    {
        int val = 1;
        for (int i = 0; i < power; i++)
        {
            val *= x;
        }

        printf("%d\n", val);
        
        sum += val;
        power += 2;

    }

    return sum;
}