echo "Enter a number"
read num
if [ $num -eq 0 ]
then
echo "The given number is zero"
elif [ $num -gt 0 ]
then
echo "The given number is positive"
else
echo "The given number is negative"
fi
