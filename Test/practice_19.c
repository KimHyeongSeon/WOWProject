#include <stdio.h>

void InputArr(int arr[], int n)
{
  int i;        for(i = 0; i < n; i++)            scanf("%d", (arr+i));}int GetMax(int arr[], int n){            int i;            int maxValue = arr[0];       for(i = 1; i < n; i++) {            if(maxValue < *(arr+i))        maxValue = *(arr+i); } return maxValue;}
