clear
#Welcome message
start="welcome_message"
while IFS= read -r var
do
  echo "$var"
done < "$start"
#welcome message end
