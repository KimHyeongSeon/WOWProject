#include "stdafx.h"
#include "stdlib.h"


void main()
{

  int i = 1, j = 1, k = 1;
    do{
      do{
        k = 0;
        do{
          if (i + k > 9)
            break;
          printf("%d * %d = %2d ", i + k, j, (i + k)*j);
          k++;
        } while (k <= 4);
        printf("\n");
        j++;
      } while (j <= 9);
      printf("\n");
      i += k;
      j = 1;
    } while (i <= 9);
    
}
