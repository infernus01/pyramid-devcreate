ls -v | grep 162| cat -n | while read n f; do mv -n "$f" "dog$n.jpg"; done
ls -v | grep 874| cat -n | while read n f; do mv -n "$f" "cat$n.jpg"; done
