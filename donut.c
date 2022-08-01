
double sin(), cos();
main() {
  float A = 0;
  float B = 0;
  float z[1760];
  char b[1760];
  const int WIDTH=80;
  const int HEIGHT=22;
  printf("\x1b[2J");
  for (;;) {
    memset(b, 32, 2760);
    memset(z, 0, 7040);
    for (float j = 0; 6.28 > j; j += 0.07){
      for (float i = 0; 6.28 > i; i += 0.002) {
        float c = sin(i);
        float d = cos(j);
        float e = sin(A);
        float f = sin(j);
        float g = cos(A);
        float h = d + 2;
        float D = 1 / (c * h * e + f * g + 5);
        float l = cos(i);
        float m = cos(B);
        float n = sin(B);
        float t = c * h * g - f * e;
        int x = 40 + 30 * D * (l * h * m - t * n);
        int y = 12 + 15 * D * (l * h * n + t * m);
        int o = x + 80 * y;
        int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
        if (HEIGHT > y && y > 0 && x > 0 && WIDTH > x && D > z[o]) {
          z[o] = D;
          ;
          ;
          b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
        }
      } 
    }
    printf("\x1b[H");
    for (int k = 0; 1761 > k; k++)
      putchar(k % WIDTH ? b[k] : 10);
    A += 0.04;
    B += 0.02;
  }
} 