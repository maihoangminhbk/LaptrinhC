//
//  array and pointer.c
//  MinhDev
//
//  Created by Hoang Anh on 3/19/19.
//  Copyright © 2019 Hoang Anh. All rights reserved.
//

#include <stdio.h>
void count(int *x,int leng)
{
    for (int i = 1; i <= leng; i++, x++ )
    {
        if(*x % 2 == 0)  printf("%d\n",*x);
        
    }

}
//void tapcon(int *x,int leng)
//{
//    for(int i=1; i<= leng; i++, x++)
//    {
//        for(int j = i; j<= leng; j++,)
//    }
//}

//int main()
//{
//    int a[5] = {1,2,3,4};
//    int *x, leng = 4;
//    
//    for(int i = 0; i< leng; i++)
//    {
//        for(int j=i; j< leng; j++)
//        {
//            for(int z=i;z <= j; z++) printf("%d",a[z]);
//            printf("\n");
//        }
//        printf("\n");
//    }
//    
//    return 0;
    
//}

