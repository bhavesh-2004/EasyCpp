#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v(5);
  for(int i = 0; i<5; i++){
  cin>>v[i];

  }

  int n;
  cout<<"Enter the Element: ";
  cin>>n;
 
int occurance = 0;
// cout<<"last Occurance: ";
// for(int i = 0; i<v.size(); i++){
//         if(v[i]==n){
//                occurance = i;
//   }
// }
//     cout<< occurance;
  
  cout<<"last Occurance: ";
for(int i = v.size()-1; i>=0; i--){
        if(v[i]==n){
               occurance = i;
               break;
  }
}
    cout<< occurance;
return 0;

}