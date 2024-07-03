#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertex, edges;
    cin>>vertex>>edges;
    vector<vector<int>> arr(vertex, vector<int>(vertex, 0));
    int u,v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }

    for(int i=0; i< vertex; i++){
        for(int j=0; j< edges; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
