#include <iostream>
using namespace std;

void Max()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    for(int i=1;i<7;i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Maximum no is " << max;


}
int main()
{
    Sum();
    return 0;
}