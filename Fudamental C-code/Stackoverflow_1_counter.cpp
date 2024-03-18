#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
#include<string>

int a, b, c;
int voters, counter1 = 0, counter2 = 0, counter3 = 0;
vector <char> vote_count;


vector<char> take_vote(){
  char vote;
  cout<<"\nCandidates are Adam,Bilal,Catherine.Enter A,B,C according to your choice."<<endl;
  for(int i=1;i<=3;i++){
  cout<<"Enter candidates "<<i<<": "<<endl;
  cin>>vote;
  vote_count.push_back(vote);
  }
  return vote_count;
}

int add_point(vector<char>add){
  int sum=3;
  for(int i=0;i<3;i++){
    sum = sum-i;
    switch(add[i]){
        case 'A':
        a+=sum;
        break;
        case 'B':
        b+=sum;
        break;
        case 'C':
        c+=sum;
        break;
        default :
        cout<<"your input in incorrect,please try again"<<endl;
        break;
    }
    return a;
    return b;
    return c;
  }
}
void winner(int a,int b,int c){
  cout<<a<<b<<c<<endl;
  if(a>b && a>c){
    cout<<"Adham is the winner"<<endl;
    }
    else if(b>a && b>c){
      cout<<"Bilal is the winner"<<endl;
    }
    else {
      cout<<"Catherine is the winner"<<endl;
    }

}

int main(){
  cout<<"See the winner of election:"<<endl;
   int i = 0;
   vector <int>point_calc;
   vector<char>add;
   while(i != 1){
     cout<<"Enter candidates list here"<<endl;
     vector<char>add;
     add = take_vote();
     add_point(add);
     cout<<"If want to  break;press 1 otherwise press 0:"<<endl;
     cin>>i;
   }
   winner(a,b,c);


  


    return 0;
}