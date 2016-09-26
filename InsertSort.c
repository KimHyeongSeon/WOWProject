void sequential_insertion_sort(int *data, int n)
{
  int i, j, min, rem;
  for(i = 0; i < n-1; i++)
  {
    for(j = i+1, min = i; j < n; j++) if (data[min] > data[j]) min = j;
    if (min == i) continue;
​
    rem = data[min];
    while(min > i) data[min] = data[--min];
    data[i] = rem;
  }
}

