import java.util.Scanner;

class palindromeno {
	public static void main(String args[]) {
		A obj = new A();
		obj.show();
	}
}

class A {
	int n;

	A() {
		System.out.println("Enter the no=");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
	}

	void show() {
		int i, r, rev = 0, t;
		t = n;
		while (n > 0) {
			r = n % 10;
			rev = rev * 10 + r;
			n = n / 10;
		}
		if (t == rev)
			System.out.println("palindrome no is=" + rev);
		else
			System.out.println("palindrome no is not=" + rev);
	}
}