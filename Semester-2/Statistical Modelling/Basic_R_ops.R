# assignment
a1 <- 5
# a1 = 5 also works but <- preferred
a1

# get help for a func using help(func)
class(a1) # prints the datatype
is.numeric(a1) # returns a logical whether a1 is numeric
is.vector(a1) # numeric is a vector implicitly
is.logical(a1)
is.character(a1)
is.matrix(a1)
is.data.frame(a1)
is.complex(a1) # FALSE
is.complex(2+0i) # TRUE

# vector creation
b1 <- c(1, 2, 3, 4, 5)
b1
b1[1]
b1[c(1,3)] # access set of values
b1[1:4] # slice the vector

# sequence generation
# similar to range(1,1000,5)
seq1 <- seq(from = 1, to = 1000, by = 5)
seq1

# repetitive sequence generation
rep1 <- rep(1000, 5)
rep2 <- rep(1000:1001, 5, each = 5)
rep1
rep2

# rep1 gives 1000 1000 1000 1000 1000 as o/p
# rep2 prints 5 1000s, 5 1001s 5 times (50 elements)
# 1000:1005 equivalent to
# 1000 1001 1002 1003 1004 1005

# print(x) prints x but just typing x is enough
# when using console or running one line

# matrix creation
# fills values from the vector column wise
mat1 <- matrix(1:10, nrow = 2, ncol = 5)
# fills values from the vector row wise
mat2 <- matrix(1:10, nrow = 2, ncol = 5, byrow = TRUE)
# dimnames - kwarg accepting a list for setting rnames and cnames
# list can have vectors as list elements
mat3 <- matrix(1:10, 2, 5, TRUE, list(c("a", "b"), c("a", "b", "c", "d", "e")))
# separately setting the row names for mat2
rownames(mat2) <- c("a", "b")
# separately setting the column names for mat2
colnames(mat1) <- c("a", "b", "c", "d", "e")
mat1
mat2
mat3
# accessing matrix data
mat3[2,4]
mat3[1, 4:5] # get 1,4 and 1,5

# c(c(1, 2), c(3, 4)) doesn't provide you a matrix
# it provides an vector combining elements from all vectors

# array creation (one or more dim)
rnames <- c("row1", "row2")
cnames <- c("col1", "col2", "col3")
pnames <- c("page1", "page2", "page3", "page4")
arr1 <- array(1:24, c(length(rnames), length(cnames), length(pnames)), dimnames=list(rnames, cnames, pnames))
arr1
# give more dimensions than the amt of data and it starts replicating
# don't do weird stuff

# stat funcs
mean(b1) # mean of my data
sd(b1) # sd of my data
var(b1) # var of my data

# math funcs
abs(-17.2)
ceiling(17.2)
floor(17.2)
min(b1)
max(b1)
round(17.222, 2) # 17.22
signif(0000.22001, 4) # 0.220 (4 significant digits)
trunc(17.222) # 17

exp(1) # e to the power x
median(b1)
mad(b1) # median of differences from median
range(b1) # returns the min and max
sum(b1)
length(b1)

# trig fns
sin(pi)
cos(pi)
tan(pi)
sinpi(2) # eqv to sin(pi*2)

# atan2 is the angle from origin to (x,y)
# for atan2(y,x)
atan2(5, 5) * 4 # should give pi
asin(1 / sqrt(2)) * 4 # should give pi

library("units") # run install.packages("units") or install from rstudio
sin(set_units(45, "degree")) * 2 # should give root 2

# data frames
# multiple types of data in same data frame
# unlike matrix where everything should be of one data type
patientID <- 1:4
age <- c(25, 34, 28, 52)
diabetes <- c("Type1", "Type2", "Type1", "Type1")
status <- c("Poor", "Improved", "Excellent", "Poor")
alive <- c(TRUE, TRUE, TRUE, TRUE)
# giving data directly in arg makes your col name weird
patientData <- data.frame(patientID, age, diabetes, status, alive)
patientData
patientData[,1:2] # first 2 columns alone (comma opt)
patientData[2,1:2] # first 2 columns of 2nd row
patientData[2,]
patientData[c("diabetes", "status")]
patientData$age
# eqv to running print(age)
# tabulates diabetes types as rows and status as cols
table(patientData$diabetes, patientData$status)

# categorizes a vector to encode your data
diabetes <- factor(c("Type1", "Type2", "Type1", "Type1")) 
# arranges in ascending order (order or ordered work as kwarg)
status <- factor(c("Poor", "Improved", "Excellent", "Poor"), order=TRUE)
# can convert the vector into integer vector due to the vector being factored
# basically, encoding data into numbers for processing
as.integer(status)
patientData <- data.frame(patientID, age, diabetes, status, alive)

df1 <- 1
df2 <- -4:5
games <- c("Hockey", "Football", "Baseball", "Curling", "Rugby",
          "Lacrose", "Basketball", "Tennis", "Cricket", "Soccer")
# if one of the columns is a single-valued vector,
# it gets repeated for n rows
df <- data.frame(df1, df2, games)
df
# give first 6 rows
head(df)
head(df, n=7)
# give last 6 rows
tail(df)
tail(df, n=7)

# list
# kwarg can be used to name the list element
list1 <- list(title="my list", ages=c(1, 2, 3), mat3, c(2, 3, 4))
list1
list1[1]
list1$title
list1["title"]

# load table from cloud
url <- "https://www.jaredlander.com/data/Tomato%20First.csv"
# sep - separator in csv
# header - if header row is present
tomato <- read.table(file = url, header = TRUE, sep = ",")
head(tomato)

# local file
url1 <- "D:/R/Tomato First.csv"
tomato1 <- read.table(url1, TRUE, ",")
head(tomato1)

# own data
url2 <- "D:/R/stud_det.csv"
stud <- read.table(url2, TRUE, ",")
stud
head(stud)
is.data.frame(stud)
