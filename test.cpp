#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> &arr, int b) {
    //Picking is possible from any direction begin or end 
    
    int start = 0; //start3
    int end1 = 09;
    int end = arr.size() - 1;
    int numElements = b;
    int n = end;
    int j = b-1;
    int k = n-b+1;
    long long sum1 = 0;
    long long sum2 = 0;
    long long sum3 = INT_MIN;
    long long sum4 = INT_MIN;
 
  	for(int i = 0 ; i < b ; i++){

  		sum1 = arr[i] + sum1;
  	}  

  	for(int i = end ; i > end-b ; i--){
  		sum2 = sum2  + arr[i];
  	}

  	//Manipulating for first
  	for(int i = end ; i > end-b ; i--){
  		if(arr[j] > arr[i]){
  			break;
  		}
  		sum1 = sum1 - arr[j] + arr[i];
  		j--;

  	}

  	for(int i = 0 ; i < b ;i++){
  		if(arr[i] < arr[k]){
  			break;
  		}
  		sum2 = sum2 - arr[k] + arr[i];
  		k++;
  	}





  
    
    
    return max(sum1,sum3);
    
    
}


int main(){

vector<int> v;
int count = 118;
int m;
cin >> m;

while(m>0){
	int s;
	cin>>s;
	m--;
	v.push_back(s);
}

int k;
cin>>k;
cout<<solve(v,k)<<endl;

return 0;




}
