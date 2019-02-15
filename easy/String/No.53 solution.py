    def reverseWords(self, s):
        # write your code here
        # strip delete white space the begin and end of this string
        # ' '.join, use white space to connect words
        # split() split string based on white space, it will skip multiple space between words.
        new = s.strip().split()
        return ' '.join(reversed(new))
