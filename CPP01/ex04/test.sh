 #! /bin/sh.

./Sed Makefile c b
sed -e 's/c/b/g' Makefile > true1
diff Makefile.replace true1 > final1
./Sed Makefile auuuuuuuuuuu plo
sed -e 's/auuuuuuuuuuu/plo/g' Makefile > true2
diff Makefile.replace true2 > final2

./Sed Makefile ------ plo
sed -e 's/------/plo/g' Makefile > true3
diff Makefile.replace true3 > final3

./Sed Makefile s ""
sed -e 's/s//g' Makefile > true4
diff Makefile.replace true4 > final4

echo "diff test 1" final1
cat final1
echo "\n -------------------\n""diff test 2" final2
cat final2
echo "\n -------------------\n" "diff test 4" final4
cat final4
echo "\n -------------------\n"
