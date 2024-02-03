#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int nArr[3]={0};
   for(int i=0;i<n;i++){
      (nArr[arr[i]])++;
   }
   int j=0;
   for(int i=0;j<3;i++){
      if(nArr[j]>0){
         cout<<j<<" ";
         nArr[j]--;
         
      }else{
         j++;
      }
   } 
}

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> triplets;
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				sum=arr[i]+arr[j]+arr[k];
				int test[3]={arr[i],arr[j],arr[k]};
		        if(sum==K){
					sort(test,test+3);
					cout<<"inserting "<<test[0]<<" "<<test[1]<<" "<<test[2]<<endl;
					if(triplets.size()==0){
						cout<<"push"<<endl;
						triplets.push_back({test[0],test[1],test[2]});
					}else{
						int done =1;
						for(int m=0;m<triplets.size();m++){
							vector<int> check=triplets[m];
        					cout<<"found "<<triplets.size()<<" "<<check[0]<<" "<<check[1]<<" "<<check[2]<<endl;

							if(test[0]==check[0] && test[1] ==check[1] && test[2] ==check[2]){
								done =0;

							}

							
							
						}
						if (done==1)
							{
								/* code */
								triplets.push_back({test[0],test[1],test[2]});

							}
					}
					
		

					
		        }
				sum=0;
			}
		}



	}


	return triplets;
}
int main(){
    int ar[11]={0,1,0,2,1,2,1,2,1,2,0};
    vector<int> arr={-26 ,32, 4 ,17 ,-16, 18, 1, 8, 6, 8, 3, -13 };
    // sort012(ar,11);
	vector<vector<int>> result=findTriplets(arr,12,10);
	for (int i = 0; i < result.size(); i++)
	{
		/* code */
		vector<int> temp=result[i];
		for (int j = 0; j < temp.size(); j++)
		{
			/* code */
			cout<<temp[j]<<" ";
		}
		cout<<endl;
		
	}
	
    

}



