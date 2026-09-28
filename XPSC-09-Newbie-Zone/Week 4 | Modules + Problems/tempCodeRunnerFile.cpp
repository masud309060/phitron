    while (l < n)
    {
        long long sum = prefix_sum[r] - (l > 0 ? prefix_sum[l - 1] : 0);

        cout << sum << endl;
        if(sum == k) ans++;

        if(sum < k) {
            r++;
        } else {
            l++;
        }
    }