let input = readLine()!.split(separator: " ").map{Int($0)!}
let (a, b, c) = (
    input[0],
    input[1],
    input[2]
)

let x = 1
for _ in 0 ..< b {
    x *= c
}
print((a < x ? "Yes" : "No"))
