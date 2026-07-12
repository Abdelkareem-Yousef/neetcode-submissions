class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
                int low = 1, high = *max_element(piles.begin(), piles.end());

                        auto hoursNeeded = [&](int k) -> long long {
                                    long long hours = 0;
                                                for (int pile : piles) {
                                                                hours += (pile + k - 1) / k;  // ceil(pile / k)
                                                                            }
                                                                                        return hours;
                                                                                                };

                                                                                                        while (low < high) {
                                                                                                                    int mid = low + (high - low) / 2;
                                                                                                                                if (hoursNeeded(mid) <= h) {
                                                                                                                                                high = mid;
                                                                                                                                                            } else {
                                                                                                                                                                            low = mid + 1;
                                                                                                                                                                                        }
                                                                                                                                                                                                }

                                                                                                                                                                                                        return low;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            };

