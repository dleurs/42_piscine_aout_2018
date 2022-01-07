find . \( -type f -name '*.sh' \) | cut -c 3- | cut -d '.' -f1 | grep -o "[^/]*$";
