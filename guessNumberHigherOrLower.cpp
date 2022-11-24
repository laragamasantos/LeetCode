/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    long long unsigned int myGuess = 0;
    long long unsigned int low = 0;
    long long unsigned int high = pow(2,31);
    public:
    int guessNumber(int n) {
        myGuess = n;
        int result;
        int end;
        
        result = guess(myGuess);
        if(result == -1){
            high = myGuess;
            myGuess = (high+low)/2;
            return guessNumber(myGuess);
        }
        else if(result == 1){
            low = myGuess;
            myGuess = (low+high)/2;
            return guessNumber(myGuess);
        }
        return myGuess;
    }
};
