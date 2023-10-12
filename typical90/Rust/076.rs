use proconio::input;

fn main() {
    input!{
        n: usize,
        a: [i64; n],
    }

    let mut b = vec![0; n*2+1];
    for i in 0..n*2 {
        b[i+1] += b[i] + a[i%n];
    }

    let mut whole = b[n];
    let solve = || -> bool {
        if whole % 10 != 0 {
            return false;
        }
        for i in 0..n {
            let t = b[i] + whole / 10;
            if b.binary_search(&t).is_ok() {
                return true;
            }          
        }
        false
    };

    if solve() {
        println!("Yes");
    } else {
        println!("No");
    }
}