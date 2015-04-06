#include<iostream>
#include<vector>
#include<fstream>
//#include"lab3_a_sort.cpp"
using namespace std;

int main(){
    ifstream fin("data1.txt");
    if(!fin){cout<<"Input file not found.\n"; return 1;}

    int x;
    //const int five=5;
    fin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++)fin>>v[i];
    int a,b,sum=0;        //a is insert, b is moveItem
    for(int n=1;n<v.size();++n){
        a=v[n];
        b=n;
        while((b>0)&&(v[b-1]>a)){
            v[b]=v[b-1];
            --b;
        }
        v[b]=a;
    }
    for(int i=v.size()-5;i<v.size();i++)sum=sum+v[i];
    cout<<"The total weight of the top five cows is "<<sum<<".\n";
    fin.close();
}
