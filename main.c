void func2() {
}
int func1(int i) {
    if ( i == 0 ) {
        return i ; 
    }
    else {
        return i + func1( i - 1 );
    }
}
void func() {
    func1(9);
    func2();
}
int main() {
    func();
}
