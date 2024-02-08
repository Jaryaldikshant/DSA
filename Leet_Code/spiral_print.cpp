// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {

//         vector<int> ans;
//         int m = matrix.size();
//         int n = matrix[0].size();
//         int total_ele = m * n;

//         int startRow = 0;
//         int endCol = n - 1;
//         int endRow = m - 1;
//         int startCol = 0;

//         int count = 0;
//         while (count < total_ele)
//         {

//             // print staring row
//             for (int i = startCol; i <= endCol && count < total_ele; i++)
//             {
//                 ans.push_back(matrix[startRow][i]);
//                 count++;
//             }
//             startRow++;

//             // print ending col
//             for (int i = startRow; i <= endRow && count < total_ele; i++)
//             {
//                 ans.push_back(matrix[i][endCol]);
//                 count++;
//             }
//             endCol--;

//             // print ending row
//             for (int i = endCol; i >= startCol && count < total_ele; i--)
//             {
//                 ans.push_back(matrix[endRow][i]);
//                 count++;
//             }
//             endRow--;

//             // print starting col
//             for (int i = endRow; i >= startRow && count < total_ele; i--)
//             {
//                 ans.push_back(matrix[i][startCol]);
//                 count++;
//             }
//             startCol++;
//         }
//         return ans;
//     }
// };