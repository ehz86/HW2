#include <iostream>
#include "header.h"

int main() {
    int a;
    std::cout<<"Choose a number of task: ";
    std::cin>>a;
    switch (a) {
        case 2: {
            second_task();
            break;
        }
        case 4: {
            fourth_task();
            break;
        }
        case 6: {
            sixth_task();
            break;
        }
        case 8: {
            eighth_task();
            break;
        }
        case 10: {
            tenth_task();
            break;
        }
        case 12: {
            twelfth_task();
            break;
        }
        case 14: {
            fourteenth_task();
            break;
        }
        case 15: {
            fifteenth_task();
            break;
        }
    }
    return 0;
}
void second_task(){
    int n;
    std::cout<<std::endl<<"Write a length of array";
    std::cin>>n;
    int a[100];
    std::cout<<std::endl<<"Write an array";
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    int *p = &a[0];
    int *pl = &a[n-1];
    int x = a[n-1];
    *pl = *p;
    *p = x;
    std::cout<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
}
void fourth_task(){
    int n = 12;
    double t =0.0;
    double a[12];
    std::cout<<"Write an array";
    for(int i =0;i<n;i++){
        std::cin>>a[i];
    }
    int k=0;
    for(int i =1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                k++;
            }
        }
    }
    for(int i=0;i<n;i++)
        std::cout<<a[i]<<" ";
    std::cout<<std::endl<<k;
}
void sixth_task(){
    int n=14;
    int a[14];
    std::cout<<"Write an array";
    for(int i=0;i<n;i++) {
        std::cin >> a[i];
    }
    for(int i=0;i<n/2;i++){
        int t=a[i];
        a[i]=a[i+n/2];
        a[i+n/2]=t;
    }
    std::cout<<"Reverse array";
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

    std::cout<<"A number of change "<<n/2;

}
void eighth_task(){
    int n,m;
    std::cout<<std::endl<<"Write a length of matrix";
    std::cin>>n>>m;
    int a[100][100];
    std::cout<<std::endl<<"Write an array";
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int sum,flag=0;
    for(int i=0;i<n;i++) {
        sum=0;
        flag=0;
        for (int j = 0; j < m; j++) {
            if(flag == 1 && a[i][j]!=0){
                sum=sum+a[i][j];
            }
            else if(a[i][j]==0)
                ++flag;
        }
        std::cout<<sum<<" ";
    }

}
void tenth_task(){
    int n,m;
    std::cout<<"Write a length of array";
    std::cin>>n>>m;
    double a[100], b[100];
    double max1 = a[0], max2 =b[0];
    int k1=0,k2=0;
    std::cout<<std::endl<<"Write an first array";
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        if(a[i] > max1) {
            max1 = a[i];
            k1 = i;
        }
    }
    std::cout<<std::endl<<"Write an second array";
    for(int i=0;i<m;i++){
        std::cin>>b[i];
        if(b[i] > max2) {
            max2 = b[i];
            k2=i;
        }
    }
    a[k1] = max2;
    b[k2] = max1;
    for(int i=0;i<n;i++)
        std::cout<<a[i]<<" ";
    std::cout<<std::endl;
    for(int i=0;i<m;i++)
        std::cout<<b[i]<<" ";

}
void twelfth_task(){
    int n,m;
    std::cout<<std::endl<<"Write a length of matrix";
    std::cin>>n>>m;
    int a[100][100];
    std::cout<<std::endl<<"Write an array";
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int maxsum=a[0][0];
    int minsum=100000000000;
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        if(sum>maxsum) {
            maxsum = sum;
        }
        if(sum<minsum) {
            minsum = sum;
        }
    }
    std::cout<<maxsum<<" "<<minsum;
}
void fourteenth_task(){
    int n;
    int a[100];
    std::cout<<std::endl<<"Write a length of array";
    std::cin>>n;
    std::cout<<std::endl<<"Write an array";
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int p= a[j]-a[i];
            if(max<p)
                max=p;
        }
    }
    std::cout<<max;
}
void fifteenth_task(){
    int n;
    std::cout<<"Write a level of pascals triangle";
    std::cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        a[i]=0;
        a[0]=1;
    }
    for(int i=0; i<n; i++){
        for(int j=i;j>0;j--){
            a[j]=a[j-1]+a[j];
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i];
    }
}