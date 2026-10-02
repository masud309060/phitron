    while (r < n)
    {
        sum += arr[r];
        if(sum >= s) {
            while (sum >= s)
            {
                ans = min(ans, r - l + 1);
                ans -= arr[l];
                l++;
            }
        }
        r++;
    }