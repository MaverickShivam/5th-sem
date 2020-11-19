echo -n "Enter temperature in F: "
read f

c=$(echo "scale=2;(5/9)*($f-32)"|bc)

echo "Temperature in celsius $c"