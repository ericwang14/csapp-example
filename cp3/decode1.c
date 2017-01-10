void decode1(long *xp, long *yp, long *zp) {
    long xp1 = *xp;
    long yp1 = *yp;
    long zp1 = *zp;

    *xp = zp1;
    *yp = xp1;
    *zp = yp1;
}
