class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        // step1 sort the deck
        sort(deck.begin(), deck.end());
        // setp2 store indecis in the queue
        queue<int> container;
        for (int index = 0; index < deck.size(); index++)
            container.push(index);
        // step3 populate the ans, by appliying rules to the queue I
        vector<int> ans(deck.size());
        for (int i = 0; i < deck.size(); i++) {
            int index = container.front();
            ans[index] = deck[i];
            container.pop();
            if (!container.empty()) {
                int nextIndex = container.front();
                container.push(nextIndex);
                container.pop();
            }
        }
        return ans;
    }
};