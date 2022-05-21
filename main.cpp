#include <iostream>
using namespace std;
int main(){
    //cout<<"Hello,world!"<<endl;
    int a=10;
    int *p=&a;
    printf("int* p:%d\n",p);
    printf("int* p+1:%d\n",p+1);
    printf("int* p+2:%d\n",p+2);
    p++;
    printf("int* p++:%d\n",p);
    char ch ='a';
    char *q=&ch;
    printf("char* q:%d\n",q);
    printf("char* q+1:%d\n",q+1);
    printf("char* q+2:%d\n",q+2);
    q++;
    printf("char* q++:%d\n",q);

    //system("pause");
    return 0;
}