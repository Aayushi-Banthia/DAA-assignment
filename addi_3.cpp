#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N, H, W;
        cin >> N;
        cin >> H;
        cin >> W;

        long long low = 0, high = max(H, W) * N;
        long long result = high;

        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long total = (mid / W) * (mid / H);

            if (total >= N)
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
