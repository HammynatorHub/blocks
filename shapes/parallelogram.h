void drawParallelogram(int x, int y) {
    int spaces = y-1;
    for (int i = 0; i < y; i++) {
        std::cout << '\n';
        for (int j = 0; j < spaces; j++) {
            std::cout << " ";
        }
        for (int l = 0; l < x; l++) {
            std::cout << "#";
        }
        spaces--;
    }
}