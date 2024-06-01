
// class Solution {
//   public:

//  int countnodes(struct Node* tree){
//     // base case
//     if(tree == nullptr){
//           return 0;
//     }
    
//     int ans = 1+countnodes(tree->left)+countnodes(tree->right);
//      return ans;
//  }


// bool isCbt(struct Node* tree, int i, int cnt){
    
//     if(tree == nullptr){
//         return true;
//     }
    
//     if(i >= cnt){
//         return false;
//     }
    
//     else{
        
//         bool left = isCbt(tree->left,2*i+1,cnt);
//         bool right = isCbt(tree->right,2*i+2,cnt);

//         return (left && right);
//     }
    
// }


// bool isMaxHeap(struct Node* tree){
    
//     // leaf node
    
//     if(tree->left ==  NULL && tree->right == NULL){
//         return true;
//     }
    
//     if(tree->right == NULL){
//         return (tree->data > tree->left->data);
//     } 
    
//     else{
//         bool left = isMaxHeap(tree->left);
//         bool right = isMaxHeap(tree->right);
        
//         return (left && right && (tree->data > tree->left->data  && tree->data > tree->right->data));
// }

// }

  
//     bool isHeap(struct Node* tree) {
//         // code here
        
//         int index = 0;
        
//         int total = countnodes(tree);
        
//         if(isCbt(tree,index,total) && isMaxHeap(tree)){
//             return true;
//         }
        
//         else{
//             return false;
//         }
//     }
// };






