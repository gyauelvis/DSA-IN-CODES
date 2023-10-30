def countdown(start, end):
    print(end)
    if start != end:
        countdown(start, end - 1)

countdown(1,10)