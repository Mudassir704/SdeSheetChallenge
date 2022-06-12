int findMinimumCoins(int amount)
{
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int cnt = 0;
    for (int i = 8; i >= 0 && amount > 0; i--)
    {
        while (coins[i] <= amount)
        {
            //             cout << coins[i] << " ";
            amount -= coins[i];
            cnt++;
        }
    }
    return cnt;
}
