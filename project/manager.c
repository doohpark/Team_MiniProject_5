#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "manager.h"

int listClothes(Clothes *c, int count){
    printf("\nNo Type Size Price Color Star Maker");
    printf("\n**************************************\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1 ) continue;
        printf("%2d",i+1);
        readClothes(c[i]);
    }
    return 1;
}
int selectDataNo(Clothes *c, int count){
    listClothes(c,count);
    int no;
    printf("번호는(취소:0)?");
    scanf("%d",&no);
    return no;
}
void saveData(Clothes *c, int count){
    FILE *fp;
    fp = fopen("clothes.txt","wt");
    for(int i=0; i<count; i++){
        if(c[i].price ==-1) continue;
        fprintf(fp, "%s %s %d %d %s %s\n",c[i].type, c[i].color, c[i].price, c[i].star, c[i].size, c[i].maker);
}
    fclose(fp);
    printf("=> 저장됨! ");
}
int loadData(Clothes *c){
    int i=0;
    FILE *fp;
    fp=fopen("clothes.txt","rt");
    if(fp==NULL){
      fp=fopen("clothes.txt","w");
      printf("=> 없음");
    }
    else {
      fp = fopen("clothes.txt", "rt");
      for(; i<100; i++){
        fscanf(fp, "%s", c[i].type);
         if(feof(fp)) break;
        fscanf(fp, "%s", c[i].color);
        fscanf(fp, "%d", &c[i].price);
        fscanf(fp, "%d", &c[i].star);
        fscanf(fp, "%s", c[i].size);
        fscanf(fp, "%s", c[i].maker);
    }
    printf("=> 로딩 성공!\n");
}
    fclose(fp);
    return i;
}
void searchType(Clothes *c, int count){
     int scnt = 0;
    char search[100];
    printf("검색할 옷 종류는? ");
    scanf("%s", search);
    printf("\nNo Type Size Price Color Star Maker\n");
    printf("======================================\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1) continue;
        if(strstr(c[i].type, search)){
            printf("%2d", i+1);
            readClothes(c[i]);
            scnt++;
        }
    }
    if(scnt == 0) 
        printf("=> 검색된 데이터 없음!\n");
}
void searchPrice(Clothes *c, int count){
    int scnt = 0;
    int search;
    printf("검색할 옷 가격은? ");
    scanf(" %d", &search);
    printf("\nNo Type Size Price Color Star Maker\n");
    printf("======================================\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1) continue;
        if(c[i].price == search){
            printf("%2d", i+1);
            readClothes(c[i]);
            scnt++;
        }
    }
}

void searchStar(Clothes *c, int count){
     int scnt = 0;
     int search;
    printf("검색할 별점은? ");
    scanf(" %d", &search);
    printf("\nNo Type Size Price Color Star Maker\n");
    printf("======================================\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1) continue;
        if(c[i].star == search){
            printf("%2d", i+1);
            readClothes(c[i]);
            scnt++;
        }
    }
}
void searchColor(Clothes *c, int count){
        int scnt = 0;
     char search[100];
    printf("검색할 옷 색상은? ");
    scanf(" %s", search);
    printf("\nNo Type Size Price Color Star Maker\n");
    printf("======================================\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1) continue;
        if(strstr(c[i].color, search)){
            printf("%2d", i+1);
            readClothes(c[i]);
            scnt++;
        }
    }
}
void searchMaker(Clothes *c, int count){
     int scnt = 0;
     char search[100];
    printf("검색할 옷 메이커는? ");
    scanf(" %s", search);
    printf("\nNo Type Size Price Color Star Maker\n");
    printf("======================================\n");
    for(int i=0; i<count; i++){
        if(c[i].price == -1) continue;
        if(strstr(c[i].maker, search)){
            printf("%2d", i+1);
            readClothes(c[i]);
            scnt++;
        }
    }
}
int selectMenu(){
    int menu;
    printf("\n***** 즐거운 쇼핑 *****\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 파일저장\n");
    printf("6. 검색: (종류,가격,별점,색상,메이커)\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    printf("*********************\n");
return menu;
}
