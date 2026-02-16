# include <iostream>
# include <vector>
# include <algorithm>
# include <string>
# include <utility>
# include <limits>
# include <cmath>
using namespace std;

vector<int> move(vector<int> arr){
    int j = 0;
    for(int i=0; i<arr.size();i++){
      if(arr[i]<0)
        swap(arr[i],arr[j++]) ;
    }
    return arr;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
}

vector<int> res = move(arr);
for(auto i: res){
    cout << i;
}
}
