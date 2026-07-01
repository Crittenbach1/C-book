
#include <stdio.h>

int binsearch(int x, int v[], int n) {
        int low, high, mid;
        
        low = 0;
        high = n - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (x < v[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            } 
            
            printf("%s %d %s %d\n", "low = ", low, "high = ", high);
        }
        
        if (low > 0 && v[low - 1] == x) {
            return low - 1;
        };
        
        return -1; /*no match*/
    }
    
    

int main()
{
    int list[] = {1,2,3,4};
    
    int index = binsearch(4, list, 4);
    printf("%d\n", index);
    
    

    return 0;
}
