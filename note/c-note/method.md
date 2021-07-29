```
//字符串拼接
函数原型： char *strcat(char *dest, const char *src){} //在源字符串src的基础上追加了dest
char *strcat(char *dest, const char *src)
{
    char *tmp = dest; //将目标字符串复制给tmp
    //用一个while循环遍历目标字符串，直到'\0'跳出循环，指针指向字符串的末尾
    while(*dest) {dest ++;}
    while ((*dest ++ = *src ++) != '\0')
    return tmp;
}
```
strcat函数的时间复杂度为O(n),
