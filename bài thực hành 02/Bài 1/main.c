#include <stdio.h>
int main(){
  int n;
  printf("Nhap vao so luong phan tu: ");
  scanf("%d",&n);
  float arr[n];
  float *ptr=arr;   //con trỏ trỏ đến phần tử đầu tiên của mảng.
  printf("Nhap cac phan tu cua mang:\n");
  for(int i=0;i<n;i++)
  {
      printf("Phan tu thu %d: ",i+1);
      scanf("%f",(ptr+1));  //truyền vào địa chỉ ô nhớ của biến thì nó mới biết chỗ để lưu giá trị. //hoặc scanf("%f",&arr[i]);
  }
  printf("\nCac phan tu trong mang la:\n");
  for(int i=0;i<n;i++)
  {
      printf("%.2f ",*(ptr+i));  //ptr + i là địa chỉ, lấy giá trị đang nằm ở ô nhớ đó //hoặc *(arr+i).
  }
  printf("\n");
  return 0;
}
//ptr=arr[0]
//ptr+1=arr[1];
//ptr+2=arr[2];
//ptr+i=arr[i];
