#include<stdio.h>
void nhapMang(int arr[], int* n){
    printf("Nhap So Phan Tu Can Nhap: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++){
        printf("Nhap Gia Tri Phan Tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n){
    printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int* n, int viTri, int giaTri){
    if (*n < 100){
        for (int i = *n; i > viTri; i--){
            arr[i] = arr[i - 1];
        }
        arr[viTri] = giaTri;
        (*n)++;
    }else{
        printf("Mang Da Day.\n");
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < *n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void suaPhanTu(int arr[], int n, int viTri, int giaTri){
    if (viTri >= 0 && viTri < n){
        arr[viTri] = giaTri;
    }else{
        printf("Vi Tri Khong Hop Le.\n");
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void xoaPhanTu(int arr[], int* n, int viTri){
    if (viTri >= 0 && viTri < *n){
        for (int i = viTri; i < *n - 1; i++){
            arr[i] = arr[i + 1];
        }
        (*n)--;
    }else{
        printf("Vi Tri Khong Hop Le.\n");
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < *n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepGiamDan(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepTangDan(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int timKiemTuyenTinh(int arr[], int n, int giaTri){
    for (int i = 0; i < n; i++){
        if (arr[i] == giaTri){
            return i;
        }
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return -1;
}

int timKiemNhiPhan(int arr[], int n, int giaTri){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == giaTri){
            return mid;
        }
        if (arr[mid] < giaTri){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
     printf("Mang Moi Khoi Tao: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return -1;
}

void menuSapXep(){
    printf("\na. Giam Dan\n");
    printf("b. Tang Dan\n");
}

void hienThiMenu(){
    printf("\nMENU\n");
    printf("1. Nhap So Phan Tu Can Nhap Va Gia Tri Cac Phan Tu\n");
    printf("2. In Ra Gia Tri Cac Phan Tu Dang Quan Ly\n");
    printf("3. Them Mot Phan Tu Vao Vi Tri Chi Din\n");
    printf("4. Sua Mot Phan Tu O Vi Tri Chi Dinh\n");
    printf("5. Xoa Mot Phan Tu O Vi Tri Chi Dinh\n");
    printf("6. Sap Xep Cac Phan Tu\n");
    printf("7. Tim Kiem Phan Tu Nhap Vao\n");
    printf("8. Thoat\n");
}

int main() {
    int arr[100];
    int n = 0;
    int luaChon, viTri, giaTri;

    do {
        hienThiMenu();
        printf("Ban Hay Nhap Lua Chon: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                printf("Nhap Vi Tri Muon Them: ");
                scanf("%d", &viTri);
                printf("Nhap Gia Tri Muon Them: ");
                scanf("%d", &giaTri);
                themPhanTu(arr, &n, viTri, giaTri);
                break;
            case 4:
                printf("Nhap Vi Tri Muon Sua: ");
                scanf("%d", &viTri);
                printf("Nhap Gia Tri Muon Sua: ");
                scanf("%d", &giaTri);
                suaPhanTu(arr, n, viTri, giaTri);
                break;
            case 5:
                printf("Nhap Vi Tri Muon Xoa: ");
                scanf("%d", &viTri);
                xoaPhanTu(arr, &n, viTri);
                break;
            case 6:
                menuSapXep();
                printf("Chon a (Giam Dan) Hoac b (Tang Dan): ");
                char chonSapXep;
                getchar();
                scanf("%c", &chonSapXep);
                if (chonSapXep == 'a') {
                    sapXepGiamDan(arr, n);
                    printf("Sap Xep Giam Dan:\n");
                    inMang(arr, n);
                } else if (chonSapXep == 'b') {
                    sapXepTangDan(arr, n);
                    printf("Sap Xep Tang Dan:\n");
                    inMang(arr, n);
                }
                break;
            case 7:
            	{
                printf("Nhap Phan Tu Can Tim: ");
                scanf("%d", &giaTri);
                printf("Tim Kiem Tuyen Tinh:\n");
                int viTriTuyenTinh = timKiemTuyenTinh(arr, n, giaTri);
                if (viTriTuyenTinh != -1) {
                    printf("Phan Tu %d Tim Thay O Vi Tri %d\n", giaTri, viTriTuyenTinh);
                }else{
                    printf("Phan Tu %d Khong Tim Thay\n", giaTri);
                }
                printf("Tim Kiem Nhi Phan:\n");
                int viTriNhiPhan = timKiemNhiPhan(arr, n, giaTri);
                if (viTriNhiPhan != -1) {
                    printf("Phan Tu %d Tim Thay O Vi Tri %d\n", giaTri, viTriNhiPhan);
                }else{
                    printf("Phan Tu %d Khong Tim Thay\n", giaTri);
                }
                break;
		      }
            case 8:
                printf("Thoat Chuong Trinh.\n");
                break;
            default:
                printf("Lua Chon Khong Ton Tai.\n");
        }
    }while(luaChon != 8);
return 0;
}
