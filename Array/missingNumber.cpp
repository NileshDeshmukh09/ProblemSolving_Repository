
#include <iostream>
using namespace std;

int main()
{
    int T;
    cout << "Enter TestCases :";
    cin >> T;

    while (T--)
    {
        int N;
        cout << "Enter ChessBoard Size : ";
        cin >> N;

        int x;
        cout << "Enter x : ";
        cin >> x;

        int y;
        cout << "Enter y : ";
        cin >> y;

        int cnt = 0;

        int x_count  = (x-1) + (N - x  );
        // cout << " x_count : "<< x_count << endl;
        int y_count  = (y-1) + (N -y );
        // cout << " y_count : "<< y_count << endl;
        cnt  = x_count + y_count;
/*
        // Checking for vertical  below the x
        for (int i = x - 1; i >= 1; i--)
        {
            // cout << "( " << i << " , " << y << " )" << endl;
            cnt++;
        }

        // Checking for vertical after x
        for (int i = x + 1; i <= N; i++)
        {
            // cout << "( " << i << " , " << y << " )" << endl;
            cnt++;
        }

        // checking for Horizontal axis after y
        for (int i = y + 1; i <= N; i++)
        {
            // cout << "( " << x << " , " << i << " )" << endl;
            cnt++;
        }

        // checking for Horizontal axis before y
        for (int i = y - 1; i >= 1; i--)
        {
            // cout << "( " << x << " , " << i << " )" << endl;
            cnt++;
        }
*/
        // Checking Upper Diagonal value
        int m = x - 1, n = y + 1;
        // cout << "Diagonally checking - " << endl;
        while (m > 0 && n <= N)
        {

            //    cout << "( " << m << " , " << n<< " )" << endl;
            cnt++;
            m--;
            n++;
        }

        // Checking for lower diagonal value
        int a = x + 1, b = y + 1;
        while (a <= N && b <= N)
        {

            // cout << "( " << a << " , " << b << " )" << endl;
            cnt++;
            a++;
            b++;
        }

        // checking for lower diagnal value before x ;
        int c = x - 1, d = y - 1;
        while (c > 0 && d > 0)
        {
            //    cout << "( " << c << " , " << d << " ) " << endl;
            cnt++;
            c--;
            d--;
        }

        int e = x + 1, f = y - 1;
        while (e <= N && f > 0)
        {
            //    cout << "( " << e  <<" , " << f <<" )" << endl;
            cnt++;
            e++;
            f--;
        }

        cout << "Count : " << cnt << endl;

        
    }
}