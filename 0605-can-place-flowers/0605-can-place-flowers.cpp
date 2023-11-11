class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int k) {

        int ctr = 0;
        int n = flowerbed.size();

        if (n == 1 && flowerbed[0] == 0){
            return true;
        }
      

        if (flowerbed[0] == 0 && flowerbed[1] ==0) {
            flowerbed[0] = 1;
            ctr++;
        }

        for (int i = 1; i <flowerbed.size() - 1; i++){

            if (flowerbed[i -1] != 1 && flowerbed[i + 1]!=1 && flowerbed[i] == 0){
                flowerbed[i] = 1 ;
                ctr++;
            }
        }

        if (flowerbed[n - 1] == 0 && flowerbed[n - 2] ==0) {
            flowerbed[1] = 1;
            ctr++;
        }
        cout << ctr;
        
       if (ctr >= k) return true;
       else return false;
    }
};