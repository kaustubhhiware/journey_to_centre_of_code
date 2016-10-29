    #include <iostream>
    using namespace std;
 
    int main() {
    	long long int n,t;
    	long long int one,zero,one1,other;
    	long long int element=0;
    	cin>>t;
    	while(t--){
    	    one=0;
            other=0;
            zero=0;
            one1=0;
    	    cin>>n;
    	    if(n==1){
    	        cout<<"yes"<<endl;
    	        continue;
    	    }
    	    for(int i=0;i<n;i++){
    	        cin>>element;
    	        if(element==1)
    	            one++;
    	        else if(element==-1)
    	            one1++;
    	        else if(element==0)
    	            zero++;
    	        else
    	            other++;
    	    }
    	    //cout<<zero<<" "<<one<<" "<<one1<<" "<<other<<endl;
    	    if(other>1 || (other==1 && one1>0)||(one1>1&&one==0)){
    	        cout<<"no"<<endl;
    	        continue;
    	    }
    	    else{
    	        cout<<"yes"<<endl;
    	        continue;
    	    }
 
    	}
    	return 0;
    }