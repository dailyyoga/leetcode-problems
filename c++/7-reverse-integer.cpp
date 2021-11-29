/*
时间: 2021.11.29
题目描述：
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

如果反转后整数超过 32 位的有符号整数的范围 [−231,  231 − 1] ，就返回 0。

假设环境不允许存储 64 位整数（有符号或无符号）。
*/
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int digital = 0;
        int tmp = x;
        while (tmp != 0) {
            digital = tmp % 10;
            res = res * 10 + digital;
            tmp /= 10;
        }
        if ((x > 0 && res <= 0) || (x < 0 && res >= 0)) {
            return 0;
        }
        if (x < 0) {
            res *= -1;
        }
        return res;
    }
};