/*
	Author: Robert Wilmot
  pledge goes here i pledge my honor i have abided by the stevens honor code
 */

int main() {
  double a,b,c;
	cout << "Enter a,b: ";
	cin >> a >> b;
	// compute and print hypotenuse
	cout<<a<<" "<<b<<endl;
	c=pow(a,2.0)+pow(b, 2.0);
	c=sqrt(c);
	cout<<"The hypotenuse is: "<<c<<endl;
	c=0.5*a*b;
	cout<<"The area is: "<<c;


	return 0;
}
