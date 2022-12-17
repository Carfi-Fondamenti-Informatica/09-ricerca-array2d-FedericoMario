int nomi(char a[][20], char b[1][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {

            if (a[i][j] != b[0][j]) {
                break;
            }
            if (j == 19) {
                return i;
            }
        }
    if (i == 9) {
        return -1;
    }
}
}
