echo "Enter radius:"
read radius
pi=3.14
area=$(echo "$radius * $radius * $pi" | bc )
echo "area of the circle is $area"