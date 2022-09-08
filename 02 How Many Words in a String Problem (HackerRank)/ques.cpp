#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    cout<<str;
    cout<<endl;

    // Validating legatl char
    for(int i=0;i<str.size();i++){
        if(!(('a'<=str[i]&&str[i]<='z')||('A'<=str[i]&&str[i]<='Z')||str[i]=='-')){
            str[i]=' ';
        }
    }

    // fixing for last char
    str.push_back(' ');

    // actual algorithum
    int count=0;
    for(int i=0;i<str.size();){
        
        count++;
        int j=i;
        for(;str[j]!=' ';j++ ){
            cout<<str[j];
        }

        for(;str[j]==' ';j++ ){
            // consecutive multiple spaces
        }
        //update i
        i=j;
        cout<<endl;
    }
    cout<<count<<endl;

}