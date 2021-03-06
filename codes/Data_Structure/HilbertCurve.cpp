//n * sqrt(q) on Mo's algorithm
long long hilbert(int n, int x, int y) {
    long long res = 0;
    for (int s = 1 << lgn ; s; s >>= 1) {
        int rx = (x & s) > 0;
        int ry = (y & s) > 0;
        res += s * 1ll * s * ((3 * rx) ^ ry);
        if (ry == 0) {
            if (rx == 1) {
                x = s - 1 - x;
                y = s - 1 - y;
            }
            swap(x, y);
        }
    }
    return res;
}
