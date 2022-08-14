// Sorting the edges array based on dist of each pair of node. 
        sort(edges.begin(),edges.end(),[](vector<int>&a, vector<int>&b){
            if(a[2]<b[2]) return true;
            return false;
        });