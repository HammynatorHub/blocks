void drawTree(int x) {
    int roundX = floor(x);
    if (roundX % 2) {

    }
    else {
        x++;
    }
    
    int spaces = x - 1;
    int occ = 1;
    int cycle = 0;
    for (int i = 0; i < x; i++) {
        std::cout << '\n';
        for (int j = spaces/2; j > 0; j--) {
            std::cout << " ";
        }
        for (int k = occ; k > 0; k--) {
            std::cout << "#";
        }
        if (cycle < x/2) {
            spaces-=2;
            occ+=2;
        }
        else if (cycle >= x/2) {
            occ = x/3;
            floor(occ);
            if (occ % 2) {
                
            }
            else {
                occ++;
            }
            spaces=x-occ;
        }
        if (cycle > x/1.5) {
            break;
        }
        cycle++;
    }
}