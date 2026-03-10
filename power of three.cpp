class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n<=0){
        return false;
      }
      else{
        while (true){
            if(n%3==0){
n/=3;
            }
if(n==1 || n%3!=0){
    break;
}

            }
            if(n==1){
                return true;
            }
            else
            return false;
        }
      }
};
