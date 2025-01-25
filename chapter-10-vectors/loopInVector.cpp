 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int>v;

    //For Loop--------> traversing the indexes
    
   cout<<"Enter the Element :"<<endl;
    for(int i = 0; i<5; i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
     cout<<"vector indexing is : ";
      for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<"  ";
    }
 cout<<endl;
 cout<<endl;
 

 
    //For Loop--------> traversing the vector
     // for each loop

    cout<<"vector is :";
    for(int ele:v){
        cout <<ele<<"  ";
    }
    cout<<endl;

    //while Loop;
  int idx = 0;
      cout<<"vector is :";
    while(idx<v.size()){
        cout<<v[idx++]<< " ";
    }
  cout<<endl;

    v.insert(v.begin()+2,9);
    
    cout<<"vector is :";
    for(int ele:v){
        cout <<ele<<"  ";
    }
    cout<<endl;

    v.erase(v.end()-1);

    cout<<"vector is :";
    for(int ele:v){
        cout <<ele<<"  ";
    }
    cout<<endl;


    
 }