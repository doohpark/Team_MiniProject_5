#ifndef CLOTHES
#define CLOTHES

typedef struct{
    char type[20]; //종류
    char color[20]; // 색깔
    int price; // 가격
    int star; // 별점
    char size; // 사이즈
    char maker[20]; // 메이커(회사)
} Clothes;

int addClothes(Product *p); //옷을 추가하는 함수
void readClothes(Product p); //옷의 목록을 출력하는 함수
int updateClothes(Product *p); // 옷의 정보를 수정하는 함수
int deleteClothes(Product *p); // 옷의 정보를 삭제하는 함수

#endif
