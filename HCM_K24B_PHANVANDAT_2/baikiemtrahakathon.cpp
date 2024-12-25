#include<stdio.h>
#include<math.h>
const int maxSize=100;


int main (){
	int array[maxSize];
	int size;
	int n = sizeof ( array) / sizeof (array[0]);
	
	while(1){
	printf("=====================menu=====================\n");
	printf("1.Nhap so luong phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri theo mang\n");
	printf("3.Dem so luong cac so nguyen to co trong mang\n");
	printf("4.Tim gia tri nho thu 2 trong mang\n");	
	printf("5.Them phan tu ngau nhien vao trong mang\n");
	printf("6.xoa phan tu tai mot vi tri cu the\n");
	printf("7.sap xep mang theo thu tu giam dan\n");
	printf("8.cho nguoi dung nhap vao mot phan tu kiem tra phan tu co ton tai khong\n");
	printf("9.Xoa phan tu trung lap hien thi phan tu doc nhap trong mang\n");
	printf("10.dao nguoc thu tu cua cac phan tu trong mang\n");
	printf("===================================================\n");
	
	// xay dung tinh nang cho menu
	int choice;
	printf(" Hay nhap tinh nang ma ban muon chon: ");
	scanf("%d",&choice);
	
	switch (choice) {
		case 1:
			printf(" hay nhap so luong phan tu trong mang: ");
			scanf("%d",&size);
			printf(" nhap phan tu trong mang : \n");
			for(int i=0;i<size;i++){
			printf(" phan tu thu %d : ", i+1);
			scanf("%d",&array[i]);}
			break;
		case 2:
			printf(" cac gia tri co trong mang : ");
	    	for(int i=0;i<size;i++){
				printf( "%d ",array[i]);
			}
				printf("\n");
			break;
		case 5:
				int giaTrimoi,viTri;
						printf(" nhap vao gia tri moi: ");
						scanf("%d",&giaTrimoi);
						printf("nhap vi tri ban muon them vao: ");
						scanf("%d",&viTri);
					// kriem tra vi tri co hop le hay khong
					if(viTri<0|| viTri>size){
						printf(" vi tri ban nhap vao khong hop le");
						break;
						printf("\n");
					}
					// di chuyen vi tri can chen
					for(int i=size;i>viTri;i--){
						array[i]=array[i-1];
					}	
					array[viTri]= giaTrimoi;
					size++;
					// hien thi mang sau khi da chen
					printf("mang sau khi da chen :");
					for(int i=0;i<size;i++){
						printf(" %d " ,array[i]);
					}
						printf("\n");		
			break;
		case 6:
			 int viTriXoa;
			 printf(" vi tri phan tu muon xoa: ");
			 scanf("%d",&viTriXoa);
			 if(viTriXoa<0||viTriXoa>size){
			 	printf("vi tri xoa khong hop le");
			 	break;
			 }
			 for(int i=viTriXoa;i<size-1;i++){
			 	array[i]=array[i+1];
			 }
			 size--;
			 printf(" mang sau khi da xoa: ");
			 for(int i=0;i<size;i++){
			 	printf(" %d ",array[i]);
			 }
			 printf("\n");
			 
			 break;
			 case 4:
			 if(size<2){
			 	printf(" mang phai co it nhat 2 phan tu ");
			 	break;
			 }
			 int pTuNN;
			 int pTuN2;
			 for(int i=0;i<size;i++){
			 	if(array[i]<pTuNN){
				 	pTuNN=array[i];
				 }
			 }
			 for(int i=0;i<size;i++){
			 	if(array[i]>pTuNN && array[i]<pTuN2){
				 	pTuN2=array[i];
				 }
			 }
			 printf(" phan tu nho thu 2 trong mang: %d",pTuN2);
			 printf("\n");
			 
			 
			 break;
			 case 7:// sap xep insertion sort
			 for(int i=1;i<size;i++){
			 	int key=array[i];
			 	int j=i-1;
			 while(j>=0&& array[j]<key){
			 	array[j+1]=array[j];
			 	j--;
			 }	
			 array[j+1]=key;
			 }
			 printf(" mang sau khi da sao xep");
			 for(int i=0;i<size;i++){
			 	printf("%d",array[i]);
			 }
			 
			 printf("\n");
			 break;
		default:
			//TODO
			break;
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
