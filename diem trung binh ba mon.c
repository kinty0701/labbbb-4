//
//  main.c
//  diem trung binh 3 mon toan ly hoa labb4
//
//  Created by kinty on 5/13/20.
//  Copyright © 2020 kinty. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int toan, ly , hoa,trungbinh;
    printf("nhap diem mon toan\n", toan);
    scanf("%d",&toan);
    
    printf("nhap diem ly\n",ly);
    scanf("%d", &ly);
     
    printf("nhap diem mon hoa\n", hoa);
    scanf("%d", &hoa);
    
    trungbinh=(toan+ly+hoa)/3;
    printf("diem trung binh 3 mon\n",toan,ly,hoa);
    scanf("%d",&trungbinh);
    return 0;
    
}
