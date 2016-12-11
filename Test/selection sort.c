#include <stdio.h>
#define SWAP(a,b) 
{
int t; t = a; a=b; b=t;
}//a와 b를 교환 

void SelectionSort(int *base, int n);
int main(void)
{
int arr[10] = { 9,4,3,10,5,8,7,6,2,1 
};   
SelectionSort(arr, 10); 
return 0;
}
void ViewArr(int *arr, int n);void SelectionSort(int *base, int n){    int i, j;    int maxi;    ViewArr(base, n);//현재 상태 출력    for (i = n; i>1; i--)//정렬할 범위를 축소해 나갑니다.    {        maxi = 0;        for (j = 1; j<i; j++)        {            if (base[maxi]<base[j])//더 큰 원소를 만나면            {                maxi = j;            }        }        SWAP(base[maxi], base[i - 1]);//교환        ViewArr(base, n);//상태 출력    }} void ViewArr(int *arr, int n){    int i = 0;    for (i = 0; i<n; i++)    {        printf("%2d ", arr[i]);    }    printf("\n");}
