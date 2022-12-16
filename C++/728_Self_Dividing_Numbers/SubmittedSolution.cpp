class Solution {

private:
    bool isSelfDividing(int num){
        string stringified_number = to_string(num);
        for(int i = 0; i < stringified_number.length(); i++){
            int number_part = int(stringified_number[i]) - '0';
            if(number_part ==0 || num % number_part != 0){
                return false;
            }
        }
        return true;
    }

public:
    vector<int> selfDividingNumbers(int left, int right) {
     vector<int> result;
     vector<int>::iterator it = result.begin();   

     for(int i = left; i <= right; i++){
         if(isSelfDividing(i)){
             result.push_back(i);
         }
     }
     return result;
    }
};
