//
//  main.c
//  bài 4
//
//  Created by kinty on 5/13/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>
#include <curses.h>
int main(int argc, const char * argv[]) {
 int num;
 printf("nhap gia tri num 1= ");
 scanf("%d", &num);
 printf("nhap gia tri num 2=");
 scanf("%d", &num);
  
  printf("\nhieu: %d", num-num);
  printf("\ntong: %d ",num+num);
  printf("\ntich:%d", num*num);
    getch;
}
