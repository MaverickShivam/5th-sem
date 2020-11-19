echo "Enter Two numbers : "
read a 
read b 
  
echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read ch 
   
case $ch in
  1)echo "Result: `expr $a + $b`" 
  ;; 
  2)echo "Result: `expr $a - $b`"  
  ;; 
  3)echo "Result: `expr $a \* $b`"  
  ;; 
  4)echo "Result: `expr $a / $b `"  
  ;; 
esac

