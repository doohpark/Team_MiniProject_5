#include "product.h"

int selectMenu();//메뉴를 고르는 함수
int listClothes(Clothes *p,int count);//전체 등록된 옷 리스트 출력
int selectDataNo(Clothes *p, int count);//삭세하거나 수정할 때 데이터 번호 정하는 함수    
void saveData(Clothes *p, int count); //파일 저장 함수
int loadData(Clothes *p); // 파일에서 데이터 불러오기 함수
void searchType(Clothes *p, int count); // 옷종류 검색
void searchPrice(Clothes *p, int count); // 옷가격 검색 
void searchStar(Clothes *p, int count);// 별점 검색
void searchColor(Clothes *p, int count); // 옷 색깔 검색
void searchMaker(Clothes *p, int count); // 옷 메이커 
