#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include"Clock.h"
using namespace std;
void insertion_sort(vector<int> &v){
    int a,b;        //a is insert, b is moveItem
    for(int n=1;n<v.size();++n){
        a=v[n];
        b=n;
        while((b>0)&&(v[b-1]>a)){
            v[b]=v[b-1];
            --b;
        }
        v[b]=a;
    }
}
int main(){
    Clock clk;
    int size=1000;
    for(int j=0;j<4;j++){
            cout<<"size = "<<size<<"\n";
    vector<int> v1(size),v2;
    srand(time(NULL));
    for(int i=0;i<size;++i)
        v1[i]=rand();
    v2=v1;
    sort(v1.begin(),v1.end());
    cout<<"sort():"<<clk.getElapsedTime()<<"secounds.\n";
    cout<<"v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
    clk.start();
    insertion_sort(v2);
    cout<<"insertion_sort():"<<clk.getElapsedTime()<<"seconds.\n";
    cout<<"v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
    size*=10;
    }
    return 0;
}
