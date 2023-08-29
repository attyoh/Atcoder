func main() {
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let (n, q) = (
        input[0],
        input[1]
    )

    var a = readLine()!.split(separator: " ").map { Int($0)! }

    var shift = 0
    for _ in 0..<q {
        let query = readLine()!.split(separator: " ").map { Int($0)! }
        let t = query[0]
        var (x, y) = (
            query[1] - 1,
            query[2] - 1
        )
        
        if t == 1 {
            x = (x + shift) % n
            y = (y + shift) % n
            a.swapAt(x, y)
        } else if t == 2 {
            shift = (shift + n - 1) % n
        } else if t == 3 {
            let ans = a[(x + shift) % n]
            print(ans)
        }
    }
}
main()