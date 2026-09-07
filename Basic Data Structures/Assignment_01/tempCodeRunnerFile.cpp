    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    