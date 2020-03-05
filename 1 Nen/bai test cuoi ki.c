//
//  bai test cuoi ki.c
//  MinhDev
//
//  Created by Hoang Anh on 5/20/19.
//  Copyright © 2019 Hoang Anh. All rights reserved.
//

#include <stdio.h>
void main()
{
    int x =5, y =6, a,b;
    a = (x = y) ? x:y;
    b =++y;
    printf("%d %d",a,b);
}
