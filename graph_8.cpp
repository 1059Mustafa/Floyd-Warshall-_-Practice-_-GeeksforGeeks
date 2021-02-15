#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() 
{
	int t; cin>>t;
	while(t--){
	    int V; cin>>V;
	    int d[V][V];
	    for(int i=0;i<V;i++){
	        for(int j=0;j<V;j++){
	            cin>>d[i][j];
	            
	        } 
	    }
	    for(int k=0;k<V;k++){
	        for(int i=0;i<V;i++){
    	        for(int j=0;j<V;j++){
    	            if(d[i][k]!=INT_MAX&&d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];
    	        } 
    	    }
	    }
	    for(int i=0;i<V;i++){
	        for(int j=0;j<V;j++){
	            if(d[i][j]==10000000) cout<<"INF"<<" ";
	            else cout<<d[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
