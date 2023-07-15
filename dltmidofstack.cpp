 void deleteMid(stack<int>&s, int n,int k=1)
    {
        if (k==(n/2)+1){
            
            s.pop();
            
            return; 
        }
        
        else{
        
            int x=s.top();
            
            s.pop();
            
            deleteMid(s,n,k+1);
            
            s.push(x);
        }
    }