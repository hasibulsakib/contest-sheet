#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<char>st;
   int n;
   cin >> n;
   char x;
   for(int i=0;i<n;i++){
    cin >> x;
    st.push(x);
   }
   int c;
   cin >>c;
   if(c==1){
        cout << "Doing POP" << endl;
    st.pop();
   }
   else if(c==2){
        cout << "Display" << endl;
    for(int i=0;i<n;i++){
        cout << st.top() ;
        st.pop();
    }
   }
   else if(c==3){
       cout << "Empty check" << endl;
    if(!st.empty()){

    cout << "NO" << endl;
    }
   else{
    cout << "YES" << endl;
   }
   }
   else if(c==4){
        cout <<"TOP" << endl;
    cout << st.top() << endl;
   }
   else if(c==5){
       cout << "Reverse :"<< endl;;
    for(int i=0;i<n;i++){
        cout << st.top();
        st.pop();
    }

   }
   else if(c==6){
   cout << "Size:"<< endl;
   cout << st.size() << endl;
   }
else if(c==7){
        char target;
        cin >>target;
        bool ok=false;
        stack<char>temp=st;
        while(!temp.empty()) {
            if(temp.top()== target){
                ok = true;
                break;
            }
            temp.pop();
        }
        if(ok){
            cout<<"FIND"<<endl;
        } else {
            cout<<"NOT FOUND"<< endl;
        }
    }
}







