use proconio::input;

fn main() {
    input! {
        n: usize,
        k: usize,
        a: [i32; n],
        b: [i32; n],
    }

    let is_possible = |diff: i32, k: i32| -> bool {
        diff <= k && diff % 2 == k % 2
    };

    let mut diff = 0;
    for i in 0..n {
        diff += (a[i]-b[i]).abs();
    }

    if is_possible(diff, k as i32) {
        println!("Yes");
    } else {
        println!("No");
    }
}
