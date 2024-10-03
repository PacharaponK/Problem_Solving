n = int(input())
last_magnet = input().strip()
group_count = 1

for _ in range(n - 1):
    current_magnet = input().strip()
    if current_magnet != last_magnet:
        group_count += 1
    last_magnet = current_magnet

print(group_count)
