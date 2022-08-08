#!/usr/bin/env python3
import os.path
import sys

space_between_stuff = 4
space_between_middle = 8

def main() -> None:
    print()
    buckets_0: list[list[str]] = [[] for _ in range(4)]
    buckets_1: list[list[str]] = [[] for _ in range(4)]
    buckets_2: list[list[str]] = [[], [""]]
    buckets_3: list[list[str]] = [[], [""]]

    final_str = "LAYOUT_split_4x6_5("

    with open(f"{os.path.dirname(sys.argv[0])}/keyboards/bastardkb/scylla/keymaps/Emily3403/keymap.c") as f:
        text = f.read()
        pass

    for i, item in enumerate(sys.argv[1].split(",")[:48]):
        item = item.strip()
        if i % 12 in set(range(6)):
            buckets_0[i // 12].append(item)
        else:
            buckets_1[i // 12].append(item)

    for i, item in enumerate(sys.argv[1].split(",")[48:]):
        item = item.strip()

        if i < 6:
            if i % 6 in set(range(3)):
                buckets_2[i // 6].append(item)
            else:
                buckets_3[i // 6].append(item)
        else:
            i %= 6
            if i < 2:
                buckets_2[1].append(item)
            else:
                buckets_3[1].append(item)

    def align_tokens(_tokens: list[list[str]]) -> list[str]:
        strs = ["" for _ in _tokens]
        tokens = list(zip(*_tokens))
        for row in tokens:
            max_len = max(len(token) for token in row)
            for i, token in enumerate(row):
                if token:
                    strs[i] += (token + ", ").ljust(max_len + space_between_stuff)
                else:
                    strs[i] += "".ljust(max_len + space_between_stuff)

        return [item for item in strs]

    first_tokens, second_tokens = align_tokens(buckets_0), align_tokens(buckets_1)
    for first, second in zip(first_tokens, second_tokens):
        final_str += "\n" + " " * 12 + first + " " * space_between_middle + second[:-3]


    final_str += "\n"

    for first, second in zip(align_tokens(buckets_2), align_tokens(buckets_3)):
        substr = "\n" + " " * 12 + " " * first_tokens[0].index(buckets_0[0][1]) + first
        final_str += substr + " " * (final_str.split("\n")[1].index(buckets_1[0][0]) - len(substr)) + " " * space_between_middle + second[:-3]

    final_str = final_str[:-1]

    final_str += "\n),\n"

    print(final_str)


if __name__ == '__main__':
    main()
