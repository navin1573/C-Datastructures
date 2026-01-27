#include <stdio.h>

int printMaxNum(int num)
{
    int count[10] = {0};

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int result = 0;
    int multiplier = 1;

    for (int i = 9; i >= 0; i--) {
      while (count[i]>0) {
        result=result*10+i;
        count[i]--;
      }
    }

    return result;
}

int main()
{
    int num = 38293367;
    printf("%d\n", printMaxNum(num));
    return 0;
}
