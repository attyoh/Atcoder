use std::collections::VecDeque;
use proconio::{input, fastout};

#[fastout]
fn main() {
    input! {q: usize};
    let mut dq = VecDeque::new();

    for _ in 0..q {
        input! {t: usize, x : usize};
        if t==1 { dq.push_front(x); }
        if t==2 { dq.push_back(x); }
        if t==3 { println!("{}", dq[x-1]); }
      	// println! ("{:?}", dq);
    }
}
