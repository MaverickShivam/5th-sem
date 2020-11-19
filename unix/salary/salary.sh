echo -n "Enter Basic salary: "
read sal
gros_sal=`echo "$sal+$sal*0.10+$sal*0.20" | bc -l`
echo "Gross Salary is: "$gros_sal
