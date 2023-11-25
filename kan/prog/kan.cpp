#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int n, p=0;
    cin >>n;
    queue<int>q;
    stack<int>s;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        q.push(x);
    }
    for(int i=0; i<n; i++){
        cin >> x;
        s.push(x);
    }
    while(p<q.size() && q.size()){
        if(q.front()==s.top()){
            q.pop();
            s.pop();
            p=0;
        }
        else{
            q.push(q.front());
            q.pop();
            p++;
        }
    }
    cout<<q.size();
}