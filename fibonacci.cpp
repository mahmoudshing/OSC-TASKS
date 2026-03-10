class Solution {
public:
    int fib(int n) {
        int arr[3];
        int sum=0;
        if(n==0){
            return 0;
        }
        else if(n==1 || n==2){
            return 1;
        }
        else {
    
        arr[0]=1;
        arr[1]=1;
        arr[2]=0;
        for(int i=3;i<=n;i++){
            arr[2]=arr[1]+arr[0];
            arr[0]=arr[1];
            arr[1]=arr[2];
        }
        } 
       
        return arr[2];
    }
};