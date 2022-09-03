ls -v | grep dog| cat -n | while read n f; do mv -n "$f" "dog$n.jpg"; done
ls -v | grep cat| cat -n | while read n f; do mv -n "$f" "cat$n.jpg"; done
