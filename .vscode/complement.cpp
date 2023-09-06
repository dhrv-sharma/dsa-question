class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
    int mask=0;
    int comp=~n;
    while(n!=0){
        n=n>>1;
        mask=mask<<1 | 1;
        
    }
    mask=mask & comp;
    // std::cout << mask << std::endl;
    return mask;
        
    }
};