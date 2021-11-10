二进制文件
一般内容不是文字，乱码。本质上文件都是 0，1 串，都是二进制文件

文本文件

头文件 cstdio / stdio.h

fopen,返回 FILE\*指针，指向文件相关的一个 FILE 变量
（FILE 实在 cstdio 中定义的 struct）

读取方法：fsacnf/fread/fgets/fgetc
写入方法：fprintf/fwrite/fputs/fputc

文件读写结束后：一定要 fclose 文件

fopen 取值
r:读
w:写，源文件存在，会被覆盖
a:添加模式，打开已有文件，在尾部添加新内容
r+:读写模式

追加 b 则以二进制文件打开
（rb\wb\ab\r+b）

Linux,Unix 下的换行符：'\n' (ASCII 码：0x0a)
Windows 下的换行符：'\r\n' (ASCII 码：0x0d0a)
MAC OS 下的换行符：'\r' (0x0d)

unix/linux/macos 下打开文件，是否二进制无区别
windows 下模式不加 b
读取文件： “\r\n"会被当做一个字符"\n"处理，少读"\r"
写入文件： "\n"，系统自动在前面加"\r"

fseek (FILE \* fp, long long offset, int origin);
将文件读（写）指针定位到距离 origin 位置的 offset 字节处去
origin 取值：
SEEK_SET: 文件开头，偏移量 0，此时 offset 为非负数
SEEK_END: 文件末尾，此时 offset 为非正数
SEEK_CUR: 当前文件指针位置，此时 offset 可正可负

fread (void \* ptr, unsigned int size, unsigned int count, FILE \* stream);
将文件读指针指向的地方的 size\*count 个字节的内容，读入内存地址 ptr,读指针后移 size\*count 字节
返回值：成功读取的字节数/size

int fgetc （FILE \* fp）读取文件 fp 中的下一个字节

unsigned int fwrite (void \* ptr, unsigned int size, unsigned int count, FILE \* fp);
将内存地址 ptr 处的 size\*count 个字节内容，写入到文件写指针指向的地方，然后将文件写指针后移 size\*count 字节
返回值：成功写入的字节数/size

int putc(int c, FILE \*fp)
将c的低8位写入文件fp
