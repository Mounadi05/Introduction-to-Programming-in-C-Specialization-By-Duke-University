#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
  return a >= b ? a : b;
}

int fon(int x, int y,
              int xmin, int xmax,
              int ymin, int ymax) {

  if (x >= xmin && x <= xmax && (y == ymin || y == ymax)) {
    return 1;
  }

  if (y >= ymin && y <= ymax && (x == xmin || x == xmax)) {
    return 1;
  }

  return 0;

}

void squares(int size1, int x_offset, int y_offset, int size2) {
  int w = max(size1, x_offset + size2);
  int h = max(size1, y_offset + size2);
  int x, y;
  for (y=0; y < h; y++) {
    
    for (x=0; x < w; x++) {
      if (fon(x, y, 
                    x_offset, x_offset + size2 - 1,
                    y_offset, y_offset + size2 - 1)) {
        printf("*");
      }
      else if (fon(x, y, 0, size1-1, 0, size1-1)) {
        printf("#");
      } 
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
