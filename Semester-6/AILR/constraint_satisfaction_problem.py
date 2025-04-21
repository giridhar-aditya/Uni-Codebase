import constraint
problem=constraint. Problem()
problem.addVariable('x', [4,5,6])
problem.addVariable('y', range (20))
def our_constraint(x,y):
  if x+y>=20:
    return True
problem.addConstraint (our_constraint, ['x', 'y'])
solutions=problem.getSolutions()
length=len (solutions)
print("(x,y) =\n{", end="")
for index, solution in enumerate (solutions):
  print("({},{})".format(solution ['x'], solution['y']), end="")
  if(index==length-1):
    break
  print(",")
print("}")