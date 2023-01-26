#include <stdio.h>

int stk[5], top = -1, size = 5;
void push(int n)
{
    if (top == size - 1)
    {
        printf("stack full\n");

        return;
    }
    top++;
    stk[top] = n;
}

void pop()
{
    int n;
    if (top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    n = stk[top];
    printf("\n%d is poped\n", n);
    top--;
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf(" %d ", stk[i]);
    }
}
int main()
{
    push(10);
    display();
    return 0;
}