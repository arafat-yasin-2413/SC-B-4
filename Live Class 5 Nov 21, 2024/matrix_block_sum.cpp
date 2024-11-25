#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

//

class Solution
{
public:
    int calculate_sum_on_2D_array(int r1, int r2, int c1, int c2,
                                  vector<vector<int>> &mat)
    {
        int sum = 0;
        for (int i = r1; i <= r2; i++)
        {
            for (int j = c1; j <= c2; j++)
            {
                sum += mat[i][j];
            }
        }

        return sum;
    }

    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
    {

        vector<vector<int>> result_mat = mat;

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                int r1 = i - k;
                int r2 = i + k;

                int c1 = j - k;
                int c2 = j + k;

                if (r1 < 0)
                {
                    r1 = 0;
                }
                if (r2 >= mat.size())
                {
                    r2 = mat.size() - 1;
                }

                if (c1 < 0)
                {
                    c1 = 0;
                }
                if (c2 >= mat[0].size())
                {
                    c2 = mat[0].size() - 1;
                }

                result_mat[i][j] =
                    calculate_sum_on_2D_array(r1, r2, c1, c2, mat);
            }
        }

        return result_mat;
    }
};