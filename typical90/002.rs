use proconio::input;

fn check(s: &str) {
    let mut cnt = 0;
    for c in s.chars() {
        if c == '(' {
            cnt += 1;
        } else {
            cnt -= 1;
        }
        if cnt < 0 {
            return;
        }
    }
    if cnt == 0 {
        println!("{}", s);
    }
}

fn main() {
    input! { n: usize };

    for i in 0..1 << n {
        let mut s = String::new();
        for j in (0..n).rev() {
            if i & (1 << j) != 0 {
                s += ")";
            } else {
                s += "(";
            }
        }
        check(&s);
    }
}
