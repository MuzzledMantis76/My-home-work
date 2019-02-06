// sum the numbers from 1 to n and return the answer
int sum(int n) {
  int y=0;
  for (int x=1, x<=n, x++){
    y+=x;
  }
  return y;

}

// sum the numbers from 1/1 + 1/2 + 1/3 + ... to 1/n and return
// sum 1/1 + 1/2 + 1/3 + ... + 1/100 = 5.18
float sumReciprocals(int n) {
  float y=0;
  for (int x=1, x<=n, x++){
    y+=1/x;
  }
  return y;
	
}

// sum the numbers from 1/n to 1/1 (same as above but reversed) and return
// 1/n + 1/(n-1) + 1/(n-2) + ... + 1/1
float sumReciprocalsReverse(int n) {
  float y=0;
  for (int x=n, x>=1, x--){
    y+=1/x;
  }
  return y;
}

int main() {
	cout << sum(100) << '\n';
	cout << sumReciprocals(100) << '\n';
	cout << sumReciprocalsReverse(100) << '\n';
}
