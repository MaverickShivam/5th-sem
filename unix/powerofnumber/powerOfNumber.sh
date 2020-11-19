echo "Enter the value of X and N where X^N"
read no
read power

counter=0
ans=1
while [ $power -ne $counter ]
do
        ans=`expr $ans \* $no`
        counter=`expr $counter + 1`
done

echo "The result is $ans"
