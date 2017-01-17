long lt_cnt = 0;
long ge_cnt = 0;

long absdiff_se(long x, long y) {

    if (x < y) {
        lt_cnt++;
        return y - x;
    }
    ge_cnt++;
    return x - y;
}
