#include "product.h"

int selectMenu();//메뉴를 고르는 함수
int listClothes(Clothes *c,int count);//전체 등록된 옷 리스트 출력
int selectDataNo(Clothes *c, int count);//삭제하거나 수정할 때 데이터 번호 정하는 함수    
void saveData(Clothes *c, int count); //파일 저장 함수
int loadData(Clothes *c); // 파일에서 데이터 불러오기 함수
void searchType(Clothes *c, int count); //옷 종류 검색
void searchPrice(Clothes *c, int count); //옷 가격 검색 
void searchStar(Clothes *c, int count);// 별점을 검색
void searchColor(Clothes *c, int count);// 옷 색상 검색
void searchMaker(Clothes *c, int count);// 옷 메이커 검색
