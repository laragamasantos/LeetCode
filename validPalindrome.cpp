class Solution {
public:
    bool isPalindrome(string s) {
        int tamanho = s.size();
        char resposta[200000];
        int cont = 0;
        for(int i=0; i<tamanho; i++){
            if(isalnum(s[i])){
                resposta[cont] = tolower(s[i]);
                cont++;
            }
        }
        
        for(int i=0; i<cont; i++){
            if(resposta[i] != resposta[cont-i-1]){
                return false;
            }
        }
    return true;
    }
};
