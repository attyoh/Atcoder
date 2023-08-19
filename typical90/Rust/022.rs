use proconio::input;
use num::integer::gcd;

fn main() {
    input! { a: usize, b: usize, c: usize };
    let g = gcd(a, gcd(b, c));
    let ans = (a / g) + (b / g) + (c / g) - 3;
    println!("{}", ans);
}
