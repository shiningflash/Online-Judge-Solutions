import re

_ = [print(("YES" if re.findall(r"^[789]\d{9}$", input()) else "NO")) for _ in range(int(input()))]
