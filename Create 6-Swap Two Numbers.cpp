void swapNumber(int &a, int &b) {
	// Write your code here.
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	//cout<<a<<b<<endl;
}

// Declare an integer variable temp to act as a temporary storage for one of the values during the swap.
// Assign the value of variable a to the temporary variable temp.
// Assign the value of variable b to variable a, effectively swapping the value of a with the value of b.
// Assign the value stored in the temporary variable temp to variable b. This step completes the swap, as the original value of a is now stored in b.
// After executing the function, the values of a and b will be swapped, and the caller of the function will observe the new values.
