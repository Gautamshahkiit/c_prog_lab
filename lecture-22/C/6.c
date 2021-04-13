#include <stdio.h>

int operation(int x, int y, char chr)
{
    int ans;
    if (chr == '+'){
        ans = x + y;
    }
    else if (chr == '-'){
        ans = x - y;
    }
    else if (chr == '*'){
        ans = x * y;
    }
    else if (chr == '/'){
        ans = x / y;
    }
    else if (chr == '%'){
        ans = x % y;
    }
    else {
        ans = 0;
    }
    return ans;
}

int main()
{
    int x = 2,y = 3;
    printf("%d", operation(x, y, '+'));
    return 0;
}