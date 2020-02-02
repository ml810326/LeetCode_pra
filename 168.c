char * convertToTitle(int n){
  int index = 0, i = 0, j = 0;
  char * arr = (char * ) calloc(10000, sizeof(char));
  while (n > 0) {
    n--;
    arr[index++] = (char)(n % 26 + 'A');
    n /= 26;
  }
  arr[index] = '\0';
  for (i = 0, j = index - 1; i < j; i++, j--) {
    char temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}
