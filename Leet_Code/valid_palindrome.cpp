// class Solution {

// private: 
// bool valid(char ch){
//     if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9' )){
//         return 1;
//     }
//     return 0;
// }

// char lowercase(char ch){
//     if ( (ch >= 'a' && ch <='z') )
//     return ch;

//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool checkPa(string a)
// {
//     int s = 0;
//     int e = a.length()-1;

//     while (s <= e)
//     {
//         if (a[s] != a[e])
//         {
//             return 0;
//         }
//         else 
//         {
//             // Here we have code to apply for ignoring the special characters
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// public:
//     bool isPalindrome(string s) { 

//         // faltu chracter hatane hai 
//          string temp = "";

//          for(int j = 0; j < s.length(); j++){
//              if(valid(s[j])){
//                  temp.push_back(s[j]);
//              }
//          }


//          // lower case me krna
//          for(int j = 0; j < temp.length(); j++){
//              temp[j] = lowercase(temp[j]);

//          }

//     // CHECK PALINDROME
//     return checkPa(temp);

        
//     }
// };