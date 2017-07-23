#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	string s1;
	getline(cin,s1);
	while(t--){
	    string s;
	    getline(cin,s);
	    
        for(int i=0;i<s.length();i++){
           if(s[i] < 91 && s[i] != 32) s[i] = s[i] + 32;
        }
        
        int sp=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 32) sp++;
        }
        
        s[0] = s[0]-32;
        
        if(sp == 0){
            cout << s << endl;
        }
        
        if(sp==1){
            int temp=0;
            s.insert(1,1,'a');
            for(int i=1;i<s.length();i++){
                if(s[i]==' ') temp++;
                if(s[i+1] == 32) {s[i] = '.'; goto l1;}
                if(s[i-1] == 32) {s[i] =s[i]-32;goto l1;}
                if(s[i] != 32 && temp <1 ){ s.erase(i,1);i--;}
                l1:;
                
            }
            cout << s << endl;
        }
        
        if(sp==2){
            int temp1=0;
            s.insert(1,1,'a');
            int h=0;
            for(int i=0;i<s.length();i++){if(s[i]==' ') h++;
                                         if(h==1){ s.insert(i+2,1,'a');break;}
                                         }
            for(int i=1;i<s.length();i++){
                if(s[i]==' ') temp1++;
                if(s[i+1] == 32) {s[i] = '.'; goto l2;}
                if(s[i-1] == 32) {s[i] =s[i]-32;goto l2;}
                if(s[i] != 32 && temp1 <2 ){ s.erase(i,1);i--;}
                l2:;
                
            }
            cout << s << endl;
        }
        
	}
    
	return 0;
}
