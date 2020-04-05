#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int q, value;
    string query;
    stack<int> s;
    stack<int> max_s;
    cin >> q;
    while(q--){
	cin >> query;
        if(query == "push"){
            cin >> value;
            s.push(value);
            if(max_s.empty()){
                max_s.push(value);
            }
            else{
                if(value >= max_s.top()){
                    max_s.push(value);
                }
                else
                    max_s.push(max_s.top());
            }
        }
        else if(query == "pop"){
            s.pop();
	    max_s.pop();
        }
        else if(query == "max"){
            cout << max_s.top() << endl;
        }
    }
    
    return 0;
}
