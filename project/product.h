#ifndef CLOTHES
#define CLOTHES
typedef struct{
    char type[20];
    char color[20];
    int price;
    int star;
    char size[20];
    char maker[20];
} Clothes;

int addClothes(Clothes *c); //옷을 추가하는 함수
void readClothes(Clothes c); //옷의 정보를 출력하는 함수
int updateClothes(Clothes *c); // 옷을 정보를 수정하는 함수
int deleteClothes(Clothes *c); // 옷을 정보를 삭제하는 함수

#endif
