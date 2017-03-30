ip=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z; then
	echo "$ip"
else
	echo "Je suis perdu!"
fi
