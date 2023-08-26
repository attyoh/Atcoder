func main() {
    let n = Int(readLine()!)!
    let a = readLine()!.split(separator: " ").map{Int($0)!}.sorted()
    let b = readLine()!.split(separator: " ").map{Int($0)!}.sorted()

    var ans = 0;
    for i in 0 ..< n {
        ans += abs(a[i]-b[i]);
    }
    print(ans)
}
main()