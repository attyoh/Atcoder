use proconio::input;
use std::collections::HashSet;

fn main() {
    input! {
        n: usize,
        s: [String; n]
    };

    let mut hs = HashSet::new();
    for i in 0..n {
        let ss = &s[i];
        if hs.contains(ss) { continue; }
        hs.insert(ss.to_string());
        println!("{}", ss);
    }
}
