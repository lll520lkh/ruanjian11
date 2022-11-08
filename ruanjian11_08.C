#include <stdio.h>
int big(int *a, int n)
{
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > ans)
        {
            ans = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return ans;
}
int main()
{
    int a[6] = {-2, 11, -1000, 130, -1000, 2};
    int b[6] = {2, -1000, 130, -1000, 11, -2};
    printf("%d\n", big(a, 6));
    printf("%d", big(b, 6));
}
