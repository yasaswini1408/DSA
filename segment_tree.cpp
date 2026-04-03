#include<bits/stdc++.h>
using namespace std;

// Function to build the segment tree
void build(vector<int>& st, vector<int>& arr, int idx, int left, int right){

  // Base case: if leaf node (single element)
  if(left==right){
    st[idx]=arr[left];        // store the array value in segment tree
    return;
  }

  int mid=(left+right)/2;

  // Build left subtree
  build(st, arr, 2*idx+1, left, mid);

  // Build right subtree
  build(st, arr, 2*idx+2, mid+1, right);

  // Store the maximum of left and right child
  st[idx]=max(st[2*idx+1],st[2*idx+2]);
}

// Function to get maximum in a given range [queryLeft, queryRight]
int maxInRange(vector<int>& st, int idx, int left, int right, int queryLeft, int queryRight){

  // Case 1: FULLY OUTSIDE
  if(queryLeft<=left && queryRight>=right) return st[idx];

  // Case 2: FULLY INSIDE
  if(queryRight< left || queryLeft>right) return INT_MIN;

  // Case 3: OVERLAP
  int mid=(left+right)/2;

  // Recursively check left and right subtrees and Return maximum of both sides
  return max(
    maxInRange(st, 2*idx+1, left, mid, queryLeft, queryRight),
    maxInRange(st, 2*idx+2, mid+1, right, queryLeft, queryRight)
  );
}

void update(vector<int>& st, int indexToUpdate, int valueToInsert, int idx, int left, int right){

  // Base case: when we reach the leaf node (actual index in array)
  if(left==right){
    st[idx]=valueToInsert;      // update the value in segment tree
    return;
  }

  int mid=(left+right)/2;

  // Decide whether to go left or right
  if(indexToUpdate<=mid) update(st, indexToUpdate, valueToInsert, 2*idx+1, left, mid);    // go to left child
  else update(st, indexToUpdate, valueToInsert, 2*idx+2,mid+1, right);          // go to right child

  // After updating child, update current node
  // (recalculate max using updated children)
  st[idx]=max(st[2*idx+1],st[2*idx+2]);
}


int main(){
  vector<int> arr={2,6,9,10,16,18,22,27};
  int n=arr.size();
  vector<int> st(4*n);
  build(st, arr, 0, 0, n-1);
  for(auto i:st) cout<<i<<" ";
  cout<<endl;
  cout<<maxInRange(st, 0, 0, n-1, 2, 5)<<endl;

  update(st, 2, 20, 0, 0, n-1);
  for(auto i:st) cout<<i<<" ";
  cout<<endl;
  cout<<maxInRange(st, 0, 0, n-1, 2, 5);
  
  return 0;
}
