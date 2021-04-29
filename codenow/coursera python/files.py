fhand = open('nays.txt')
for line in fhand:
    if line.startswith('Okay'):
        print(line)