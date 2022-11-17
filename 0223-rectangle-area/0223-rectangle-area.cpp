class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int total_area = (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1);
if (ax2 <= bx1 || ay1 >= by2 || ax1 >= bx2 || ay2<= by1) {
return total_area; //for 1st case
}
//for 2nd case
int c1 = min(ax2, bx2) - max(ax1, bx1);
int c2 = min(ay2, by2) - max(ay1, by1);
int overlap_area = c1 * c2;
return total_area - overlap_area;
        
    }
};