GAMES = read.csv("C:/Users/kesiv/OneDrive/Documents/games.csv")
GAMES
print(GAMES$games)
print(GAMES$price)

print(max(GAMES$price))
min(GAMES$price)
print(subset(GAMES == "S.NO"))



#DATA SET FROM KAGGLE
PETROL = read.csv("C:/Users/kesiv/OneDrive/Documents/R/SPOTIFY/278k_labelled_uri.csv")
PETROL

#writing 
write.csv("price.csv")

#data frames
data_2 = data.frame(rollno=numeric(),gender = character(),weight = numeric(),hse_marks = numeric())
