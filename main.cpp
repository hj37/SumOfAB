#include <iostream>

using namespace std;


void solution(int a,int b)
{
    int sum = 0;
    for(int i = a; i <= b; i++)
    {
        sum += i;
        if(i != b)
        {
            cout << i;
            cout << " + ";
        }
        else
        {
            cout << i;
            cout << " = ";
        }
    }
    cout << sum;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int A; int B;
    /*�ڿ��� A, B ���ʷ� �Է� */

    cin >> A >> B;
    solution(A,B);

    return 0;
}
