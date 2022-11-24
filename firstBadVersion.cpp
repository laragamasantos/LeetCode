// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {    
        long long unsigned int low = 0;
        long long unsigned int high = pow(2,31);
        
        while(1){
            if(!isBadVersion(n)){
                low = n;
                n = (low+high)/2;    
            } else{
                if(isBadVersion(n-1)){
                    high = n;
                    n = (high+low)/2;
                }
                else
                    return n;
            }
        }
        return 0;
    }
};
