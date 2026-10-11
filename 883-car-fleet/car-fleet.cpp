class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, double>> store;
    stack<double> st;

    int n = position.size();

    for (int i = 0; i < n; i++) {
        double num = (double)(target - position[i]) / speed[i];
        store.push_back({position[i], num});
    }

    sort(store.rbegin(), store.rend());

    for (int i = n - 1; i >= 0; i--) {
        st.push(store[i].second);
    }

    double check = st.top();
    st.pop();

    int fleet = 1;

    while (!st.empty()) {
        if (st.top() > check) {
            fleet++;
            check = st.top();
        }
        st.pop();
    }

    return fleet;
}
};