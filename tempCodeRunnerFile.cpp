  while (t--)
  {
    int n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      arr[i] = x;
      arr2[x] = arr[x]++;
    }
    int max_num = *max_element(arr, arr + n);
    cout << arr2[max_num] << "\n";
  }