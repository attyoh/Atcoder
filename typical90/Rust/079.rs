use proconio::input;

fn main() {
    input!{
        h: usize,
        w: usize,
        mut a: [[i64; w]; h],
        b: [[i64; w]; h],
    }

    let mut ans = 0;
    for i in 0..h-1 {
        for j in 0..w-1 {
            let mut d = b[i][j] - a[i][j];
            a[i][j] += d;
            a[i+1][j] += d;
            a[i][j+1] += d;
            a[i+1][j+1] += d;
            ans += d.abs();
        }
    }

    if a==b {
        println!("Yes\n{}", ans);
    } else {
        println!("No");
    }
}