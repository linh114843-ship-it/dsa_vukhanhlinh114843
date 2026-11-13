#include<stdio.h>
#include<string.h>
#define MAX 100
typedef struct{
char ma[20];
char hoTen[50];
float diem1,diem2,diem3;
}SinhVien;

void nhapDanhSach(SinhVien *ds,int*n){
  printf("Nhap vao so luong sinh vien(toi da %d): ",MAX);
scanf("%d",n);
getchar(); //xử lí ký tự xuống dòng sau khi nhập số
for(int i=0;i<*n;i++){
printf("\n--- Nhap thong tin sinh vien thu %d ---\n",i+1);

printf("Nhap ma sinh vien: ");
fgets((ds +i)->ma,sizeof((ds +i)->ma),stdin);
strtok((ds+i)->ma,"\n");

printf("Nhap ho va ten: ");
fgets((ds +i)->hoTen,sizeof((ds +i)->hoTen),stdin);
strtok((ds+i)->hoTen,"\n");

printf("Nhap diem 1: ");
scanf("%f",&(ds+i)->diem1);

printf("Nhap diem 2: ");
scanf("%f",&(ds+i)->diem2);

printf("Nhap diem 3: ");
scanf("%f",&(ds+i)->diem3);
getchar();
}
}
void inDanhSach(SinhVien *ds, int n){
  printf("\n=== DANH SACH SINH VIEN ===\n");
printf("%-10s | %-25s | %-8s | %-8s | %-8s\n", "Ma SV", "Ho va Ten", "Diem 1", "Diem 2", "Diem 3");
printf("             -----------          \n");
for(int i=0;i<n;i++){
printf("%-10s | %-25s | %-8.2f | %-8.2f | %-8.2f\n",(ds+i)->ma,(ds+i)->hoTen,(ds+i)->diem1,(ds+i)->diem2,(ds+i)->diem3);
printf("              ==========           \n");
}
}
  int main(){
    SinhVien ds[MAX];
    int n=0;
    nhapDanhSach(ds,&n);
    inDanhSach(ds,n);
    return 0;
  }

