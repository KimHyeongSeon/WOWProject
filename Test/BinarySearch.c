#include <stdio.h>
 
int RecusiveBinSearch( int nArr[], int nBegin, int nEnd, int nTarget )
{
    int nMid = 0;
 
    if( nBegin > nEnd )
    {
        return -1;  //탈출 조건 및 탐색 실패
    }
 
    nMid = (nBegin+nEnd) / 2;
 
    if( nArr[nMid] == nTarget )
    {
        return nMid;            //타겟을 찾았다.
    }
    else if( nTarget < nArr[nMid] )
    {
        return RecusiveBinSearch( nArr, nBegin, nMid-1, nTarget );
    }
    else
    {
        return RecusiveBinSearch( nArr, nMid+1, nEnd, nTarget );
    }
}
 
int main( )
{
    int nArr[] = { 1, 3, 5, 7, 9, 11, 13 };
    int nResult;
 
    nResult = RecusiveBinSearch( nArr, 0, sizeof(nArr)/sizeof(int)-1, 7 );
     
    if(nResult == -1)
    {
        printf( "값이 없습니다.\n" );
    }
    else
    {
        for( int i=0 ; i<sizeof(nArr)/sizeof(int) ; ++i )
        {
            printf( "%d ", nArr[i] );
        }
        printf( "\n%d번째 배열 요소에 있습니다.\n", nResult );
    }
 
    return 0;
}
