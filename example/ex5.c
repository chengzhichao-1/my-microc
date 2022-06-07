// micro-C example 5 -- return a result via a pointer argument; nested blocks

void main(int n) {
	int a = 2;
	int n = a++;
	print n;
	n = a--;
	print n;
	n = ++a;
	print n;
	n = --a;
	print n;
}

