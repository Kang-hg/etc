def flatten(data):
    output = []
    for values in data:
        if type(values) == list:
            output += flatten(values)
        else:
            output.append(values)
    return output
        

example = [[1, 2, 3], [4, [5, 6]], 7, [8, 9]]
print()
print("원본:", example)
print("변환:", flatten(example))
print()
