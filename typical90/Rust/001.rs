use proconio::input;

fn main() {
    input! {
        n: usize,
        l: usize,
        k: usize,
        a: [usize; n],
    }

    let solve = |m| {
        let mut cnt = 0;
        let mut pre = 0;
        for &ai in &a {
            if ai - pre >= m && l - ai >= m {
                cnt += 1;
                pre = ai;
            }
        }
        cnt >= k
    };

    let mut left = 0;
    let mut right = l+1;
    while right - left > 1 {
        let mid = (left + right) / 2;
        if solve(mid) {
            left = mid;
        } else {
            right = mid;
        }
    }
    println!("{}", left);
}
