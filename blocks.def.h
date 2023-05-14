static const Block blocks[] = {
    /* Icon */  /* Command */                                                                                         /* Update Interval */   /* Update Signal */
    {" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},
    {" ", "sh -c \"awk '/cpu / {total=\\$2+\\$3+\\$4+\\$5+\\$6+\\$7+\\$8; used=\\$2+\\$3+\\$4+\\$7+\\$8; printf(\\\"%.2f%%\\\", (used*100)/total)}' /proc/stat\"", 5, 0},
    {" ", "df -h / | awk 'NR==2{print $4\"/\"$2}'", 60, 0},
    {"\uf028 ", "VOL=\"$(amixer get Master | tail -n1 | sed -r 's/.*\\[(.*)%\\].*/\\1/')\" && echo \"$VOL%\"", 5, 0},
    {" ", " date '+%b %d (%a) %I:%M%p'", 5, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

static const char *fonts[] = {
    "JetBrainsMono Nerd Font:size=10"
};
static const unsigned int num_fonts = sizeof(fonts) / sizeof(fonts[0]);

