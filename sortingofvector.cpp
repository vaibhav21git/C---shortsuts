// Sorting the edges array based on dist of each pair of node.
sort(edges.begin(), edges.end(), [](vector<int> &a, vector<int> &b)
     {
            if(a[2]<b[2]) return true;
            return false; });

// to move in four direction
vector<int> dir = {0, 1, 0, -1, 0};

// run a for loop
// for(int i = 0;i<4;i++)
// {
//    i , i+1
// this will give u 4 directions
// }