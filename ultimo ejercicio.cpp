#include  <stdio.h>
int main () {
int m=10,n=10;
int x;
int j;
for (int x= 1; x<=m; x++) {
for (j=1; j<=n; j++) {
printf("%3d",x *j);
}
printf ("\n");
}

return 0;
}