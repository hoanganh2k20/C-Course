#include <stdio.h>

int s1[] = {1,2,5,13,17,19,21};
int s2[] = {47,74,21,174,196,14,34};
int s3[14];

void gop_mang(){
    int index = 0;
    for(int i = 0;i < 7;i++){
        s3[index] = s1[i];
        index++;
    }
    for(int i = 0;i < 7;i++){
        s3[index] = s2[i];
        index++;
    }
    printf("Mang sau khi gop la: ");
}

void inmang(int mang[], int sophantu){
    printf("s3[] = ");
    for(int i = 0;i < sophantu;i++){
        printf("%d ",mang[i]);
    }
    printf("\n");
}

void Tim_kiem(int mang[], int sophantu, int gia_tri){
    printf("Vi tri co gia tri %d la: ",gia_tri);
    for(int i = 0;i < sophantu;i++){
        if(mang[i] == gia_tri){
            printf("%d ",i);
        }
    }
    printf("\n");
}

void hoanvi(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

void sapxeplondenbe(int mang[],int sophantu){
    for(int i = 0;i < sophantu;i++){
        for (int j = i+1; j < sophantu; j++)
        {
            if(mang[i] < mang[j]){
                hoanvi(&mang[i],&mang[j]);
            }
        }
    }
    printf("Mang giam dan: ");
}

void sapxepbedenlon(int mang[],int sophantu){
    for(int i = 0;i < sophantu;i++){
        for (int j = i+1; j < sophantu; j++)
        {
            if(mang[i] > mang[j]){
                hoanvi(&mang[i],&mang[j]);
            }
        }
    }
    printf("Mang tang dan: ");
}

int main(int argc, char const *argv[])
{
    /* code */
    int x = 10,y = 20;
    gop_mang();
    inmang(s3,14);
    Tim_kiem(s3,14,21);
    sapxeplondenbe(s3,14);
    inmang(s3,14);
    sapxepbedenlon(s3,14);
    inmang(s3,14);
    return 0;
}
