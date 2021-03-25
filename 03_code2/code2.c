
int printTriangle(int size) {
    	int i;
        i = 1;
        int j;
        int starCount;
        starCount = 0;
        while(i <= size)
        {
                j = 0;
                while(j < i)
                {
                        printf("*");
                        j++;
                         starCount++;
                }
                i++;
                printf("\n");
        }
        return(starCount);
}


int main(void) {
  int numStars;
  printf("Here is a triangle with height 4\n");
  numStars = printTriangle(4);
  printf("That triangle had %d total stars\n", numStars);
  printf("Here is a triangle with height 7\n");
  numStars = printTriangle(7);
  printf("That triangle had %d total stars\n", numStars);

  return 0;
}



