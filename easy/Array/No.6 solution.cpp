    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        if(A.empty()) return B;
        if(B.empty()) return A; // two are all empty also handle
        int i = 0;
        int j = 0;
        while(i < A.size() && j < B.size()){
            if(A[i] <= B[j]){
                i++;
                continue;
            }
            A.insert(A.begin()+i,B[j]); // for vector insert, has to use iterator to be position.
            i++; // insert to A, so i need +1
            j++;
        }
        while(j != B.size()){
            A.insert(A.begin()+i,B[j]);
            i++; // don't forget insert to A, so i need +1
            j++;
        }
        return A;
    }
