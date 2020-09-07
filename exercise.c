
// 掛け算
int Mul(int a,int b)
{
    // aとbを掛けた値を返す
    a = 0;
    a = a * b;

    return ans;
}

// 'num'の段の九九を表示する
void PrintMulTable(void)
{
    float x = 0; // 掛ける値

    // 1~9の九九を表示する
    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));

    x = x + 1;
    printf("%d * %d = %d\n",num,x,Mul(num,x));
}

// ここから開始
int main(void)
{
    // ７の段の九九を表示する
    PrintMulTable(7);

    return 0;
}