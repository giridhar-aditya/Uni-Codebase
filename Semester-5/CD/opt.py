file = input("Enter File Name :")
ipf = open(file,"r")
rhs_dict = {}
line = ipf.readline()
while line:
    line = line.split["="]
    rhs = line[-1].replace("\n","")
    opt_rhs = rhs_dict.get(rhs,rhs)
    if opt_rhs == rhs:
        rhs_dict[rhs] = line[0]
    print(f"{line[0]} = {opt_rhs}")
    line = ipf.readline()