void main(int n) {
    try {
        int a = 0;
        int n = 5;
        n = n / a;
    }
    catch ("ArithmeticalExcption")
    {
        n = 0;
        print n;
    }
    finally {
        print 'F';
    }
    print 'S';
}