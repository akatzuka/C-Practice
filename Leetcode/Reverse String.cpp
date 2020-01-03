class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1;   //initialize counters for keeping track of vector positions
        while(left < right)                 //while loop that runs as long as left counter is less than right
        {
            char temp = s[left];            //temp variable for holding character to be swapped
            s[left++] = s[right];           //set element left+1 to right
            s[right--] = temp;              //set element right-1 to temp
        }
    }
};
