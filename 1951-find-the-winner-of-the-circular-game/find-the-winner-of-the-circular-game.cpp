class Solution {
public:

    int winner(vector<bool> &person,int n,int index,int person_left,int k){
        if(person_left==1){ //declaring winner
            for(int i=0;i<n;i++){
                if(person[i]==0){
                    return i+1;
                }
            }
        }
        int kill = (k-1)%person_left;
        while(kill--){
            index = (index+1)%n;
            while(person[index]==1){
                index=(index+1)%n;
            }
        }
        person[index]=1;
        while(person[index]==1){
            index=(index+1)%n;
        }
        return winner(person,n,index,person_left-1,k);
    }

    int findTheWinner(int n, int k) {
        vector<bool> person(n,0);
        int person_left=n;
        int ans = winner(person,n,0,person_left,k);
        return ans;
    }
};