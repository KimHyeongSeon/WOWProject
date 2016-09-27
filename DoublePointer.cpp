void MaxAndMin(int *arr, int size, int **mxPtr, int **mnPtr)
{
    int *max, *min;
    int i;

    max=min=&arr[0];
    for(i=0;i<size;i++)
    {
        if(*max<arr[i])
        max=&arr[i];
        if(*max>arr[i])
        max=&arr[i];
    }

*mxPtr=max;
*mnPtr=min;
}
int _tmain(int argc, _TCHAR* argv[])
{
	  int * maxPtr;
	  int * minPtr;
	  int arr[5];
	  int i;

	  for(i=0;i<5;i++)
	  {
		    printf("정수 입력 %d: ", i+1);
		    scanf("%d", &arr[i]);
	  }
 
	  MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
	  printf("최대 : %d, 최소 : %d \n", *maxPtr, minPtr);

	  return 0;
}
