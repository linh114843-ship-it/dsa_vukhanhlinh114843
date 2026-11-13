#include<stdio.h>
#include<stdlib.h> //thư viện chứa malloc, free
//hàm nhập mảng 2 chiều, sử dụng con trỏ.
void nhapMang(float **arr,int soHang,int soCot){
  for (int i=0;i<soHang;i++){
    for(int j=0;j<soCot;j++){
      printf("Nhap phan tu [%d][%d]: ",i,j);
      scanf("%f",*(arr+i)+j);
      }
    }
  }
//hàm in mảng 2 chiều sử dụng con trỏ 
void inMang(float**arr,int soHang,int soCot){
  printf("\n--- Mang 2 chieu cac so thuc ---\n");
  for(int i=0;i<soHang;i++){
    for(int j=0;j<soCot;j++){
      printf("%8.2f ", *(*(arr+i)+j));
      }
      printf("\n");
    }
  }
int main(){

  int soHang, soCot;
  printf("Nhap so hang: ");
  scanf("%d",&soHang);
  printf("Nhap so cot: ");
  scanf("%d", &soCot);
  float **arr= (float **)malloc(soHang*sizeof(float *));
  if(arr==NULL){
    printf("Khong du bo nho!\n");
    return 1;
  }  
  for(int i=0;i<soHang;i++){
    arr[i]=(float*)malloc(soCot*sizeof(float));
    if(arr[i]==NULL){
      printf("Khongdu bo nho!\n");
      return 1;
    }
  }
nhapMang(arr,soHang,soCot);
inMang(arr,soHang,soCot);
for(int i=0;i<soHang;i++){
  free(arr[i]);
}
free(arr);
return 0;
}
