class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int index =0;
        while(index < tickets.size()){
            if(tickets[index] != 0){
                time++;
                tickets[index]--;
            }
            if(tickets[k]==0)
                return time;

            index++;
               
            if(index == tickets.size()){
                index = 0;
            }
        }
    return time;
    }
};