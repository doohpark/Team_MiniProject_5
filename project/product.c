#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "product.h"

int addClothes(Clothes *c){
    printf("종류는? ");
    scanf("%s",c->type);
    printf("사이즈는? ");
    scanf("%s", c->size);
    printf("가격은? ");
    scanf("%d", &c->price);
    printf("색상은?");
    scanf("%s", c->color);
    printf("별점은? ");
    scanf("%d", &c->star);
    printf("메이커는?");
    scanf("%s", c->maker);

    printf("=> 추가됨!\n");
    return 1;
}
void readClothes(Clothes c){
    printf(" %s %s %d %s %d %s\n",c.type, c.size, c.price, c.color, c.star, c.maker);
}
 
int updateClothes(Clothes *c){
    printf("종류는? ");
    scanf("%s",c->type);
    printf("사이즈는? ");
    scanf("%s", c->size);
    printf("가격은? ");
    scanf("%d", &c->price);
    printf("색상은?");
    scanf("%s", c->color);
    printf("별점은? ");
    scanf("%d", &c->star);
    printf("메이커는?");
    scanf("%s", c->maker);
    printf("=>수정성공!\n");
    return 1;
}
int deleteClothes(Clothes *c){
     c->price =-1;
     c->star =-1;
     printf("=>삭제됨!\");
    return 1;
}
