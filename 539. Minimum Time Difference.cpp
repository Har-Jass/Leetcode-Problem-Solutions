class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //step 1: fetching minutes for given string
        vector<int> minutes;
        for(int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0, 2));
            int min = stoi(curr.substr(3, 2));
            int totalMinutes = hours * 60 + min;
            minutes.push_back(totalMinutes);
        }

        //step 2: sort the minutes vector
        sort(minutes.begin(), minutes.end());

        //step 3: find differences between all values and find minimum difference
        int mini = INT_MAX;
        int n = minutes.size();

        for(int i = 0; i < n - 1; i++) {
            int diff = minutes[i + 1] - minutes[i];
            mini = min(mini, diff);
        }

        //step 4: calculating the last element and first element difference because of circular nature of time
        int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
        mini = min(mini, lastDiff);

        return mini;
    }
};