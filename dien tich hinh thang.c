//
//  main.c
//  dien tich hinh thang
//
//  Created by kinty on 5/13/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>
#include<curses.h>
int main(int argc, const char * argv[]) {
    int top, botton, height, area;
    printf("\nnhap gia tri top", top);
    scanf("%d", &top);
    printf("\nnhap gia tri botton", botton);
    scanf("%d", &botton);
    printf("\nnhap gia tri height ", height);
    scanf("%d", &height);
    
    area=(top+botton)*height/2;
    printf("\ndien tich hinh thang",area);
       scanf("%d", &area);
     
  getch;
    
}
