cat /etc/passwd | grep -v '#' | sed 's/:.*//'| awk '(NR + 2)%2==0'|rev| sed -n "${FT_LINE1},${FT_LINE2}"p| tr '\n' ','|sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
