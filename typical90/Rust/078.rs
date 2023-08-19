use proconio::input;

fn main() {
    input! {
        n: usize,
        m: usize,
        ab: [(usize, usize); m]
    };

    let mut to: Vec<Vec<usize>> = vec![vec![]; n];
    for (a, b) in &ab {
        let a -= 1;
        let b -= 1;
        to[a].push(b);
        to[b].push(a);
    }

    let mut ans = 0;
    for i in 0..n {
        let mut cnt = 0;
        for &t in &to[i] {
            if i > t {
                cnt += 1;
            }
        }
        if cnt == 1 {
            ans += 1;
        }
    }
    println!("{}", ans);
}
