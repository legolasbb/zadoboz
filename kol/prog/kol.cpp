#include <iostream> 
#include <queue>

using namespace std;

int main(){
    int op, a;
    unsigned long long wyn = 0;
    char x;
    cin >> op;
    queue<int>pac;
    for(int i =0; i<op; i++){
        cin>>x;
        if(x=='N'){
            cin >> a;
            pac.push(a);
        }
        else{
            pac.pop();
        }
    }
    int k =pac.size();
    if(k>0){
        for(int i =0; i<k; i++){
            wyn+=pac.front();
            pac.pop();
        }
        cout<<k<<"\n";
        cout<<wyn;
    }
    else{
        cout<<0;
    }
}