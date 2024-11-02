class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ptr=digits.size()-1;
        bool all_nine=true;
        while(ptr!=-1){
            if(digits.at(ptr)!=9){
                digits.at(ptr)++;
                all_nine=false;
                break;
            }
            else
            digits.at(ptr)=0;
            ptr--;
        }
        if(!all_nine)
        return digits;
        else{
            vector<int> result{1};
            for(auto &i : digits)
            result.push_back(i);
            return result;
        }

    }
};