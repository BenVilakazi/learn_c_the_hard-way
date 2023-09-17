def draw_square(h, o):
    m = h - 2
    
    if o:
        print("*" * h)
        for i in range(1, m+1):
            print("*" + " " * m + "*")
        print("*" * h)
    else:
        for i in range(1, h+1):
            print("*" * h + " " * i)