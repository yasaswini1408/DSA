class NumArray {
public:
    vector<int> nums;
    vector<int> st;
    void build(int idx, int l, int r) {
        if (l == r) {
            st[idx] = nums[l];
            return;
        }
        int m = (l + r) / 2;
        build(2 * idx + 1, l, m);
        build(2 * idx + 2, m + 1, r);
        st[idx] = st[2 * idx + 1] + st[2 * idx + 2];
    }

    void updateutil(int idx, int l, int r, int pos, int val) {
        if (l == r) {
            st[idx] = val;
            return;
        }
        int m = (l + r) / 2;
        if (pos <= m) updateutil(2 * idx + 1, l, m, pos, val);
        else updateutil(2 * idx + 2, m + 1, r, pos, val);
        // Recompute after update
        st[idx] = st[2 * idx + 1] + st[2 * idx + 2];
    }

    int query(int idx, int l, int r, int ql, int qr) {
        // No overlap
        if (r < ql || l > qr) return 0;
        // Complete overlap
        if (ql <= l && r <= qr) return st[idx];
        int m = (l + r) / 2;
        return query(2 * idx + 1, l, m, ql, qr) +query(2 * idx + 2, m + 1, r, ql, qr);
    }

    NumArray(vector<int>& nums) {
        this->nums = nums;
        int n = nums.size();
        st.resize(4 * n);
        build(0, 0, n - 1);
    }

    void update(int index, int val) {
        updateutil(0, 0, nums.size() - 1, index, val);
    }

    int sumRange(int left, int right) {
        return query(0, 0, nums.size() - 1, left, right);
    }
};