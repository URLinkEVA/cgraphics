# 下载vs
这步教程很多，跳过

# 新建项目导入代码
出现报错

下载下面的库， **注意** 调试器切换为x64

## eigen
[下载zip](https://eigen.tuxfamily.org/index.php?title=Main_Page)

解压至作业文件夹，添加进包含目录

## opencv
[下载](https://opencv.org/releases/)

同上添加include

# 运行本地调试器报错
```
已启动生成…
1>------ 已启动生成: 项目: h, 配置: Debug Win32 ------
1>main.cpp
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\Half.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\BFloat16.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\GenericPacketMathFunctions.h(676,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\main.cpp(95,62): warning C4305: “参数”: 从“double”到“float”截断
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\main.cpp(113,62): warning C4305: “参数”: 从“double”到“float”截断
1>rasterizer.cpp
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\Half.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\BFloat16.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\GenericPacketMathFunctions.h(676,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\rasterizer.cpp(62,32): warning C4305: “初始化”: 从“double”到“float”截断
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\rasterizer.cpp(63,32): warning C4305: “初始化”: 从“double”到“float”截断
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\rasterizer.cpp(81,33): warning C4244: “=”: 从“double”转换到“float”，可能丢失数据
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\rasterizer.cpp(82,34): warning C4244: “=”: 从“double”转换到“float”，可能丢失数据
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\rasterizer.cpp(163,15): warning C4244: “参数”: 从“float”转换到“const unsigned int”，可能丢失数据
1>Triangle.cpp
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\Half.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\BFloat16.h(1,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\codeshack\games101\eigen3\Eigen\src\Core\arch\Default\GenericPacketMathFunctions.h(676,1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\Triangle.cpp(39,63): warning C4244: “参数”: 从“double”转换到“const float”，可能丢失数据
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\Triangle.cpp(39,49): warning C4244: “参数”: 从“double”转换到“const float”，可能丢失数据
1>D:\cgraphics\games101\GAMES101_作业\Assignment2\代码框架\Triangle.cpp(39,35): warning C4244: “参数”: 从“double”转换到“const float”，可能丢失数据
1>正在生成代码...
1>main.obj : error LNK2019: 无法解析的外部符号 "public: __thiscall cv::Mat::Mat(int,int,int,void *,unsigned int)" (??0Mat@cv@@QAE@HHHPAXI@Z)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "public: __thiscall cv::Mat::~Mat(void)" (??1Mat@cv@@QAE@XZ)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "public: void __thiscall cv::Mat::convertTo(class cv::debug_build_guard::_OutputArray const &,int,double,double)const " (?convertTo@Mat@cv@@QBEXABV_OutputArray@debug_build_guard@2@HNN@Z)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "bool __cdecl cv::imwrite(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class cv::debug_build_guard::_InputArray const &,class std::vector<int,class std::allocator<int> > const &)" (?imwrite@cv@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV_InputArray@debug_build_guard@1@ABV?$vector@HV?$allocator@H@std@@@3@@Z)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "int __cdecl cv::waitKey(int)" (?waitKey@cv@@YAHH@Z)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl cv::imshow(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class cv::debug_build_guard::_InputArray const &)" (?imshow@cv@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV_InputArray@debug_build_guard@1@@Z)，函数 _main 中引用了该符号
1>main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl cv::cvtColor(class cv::debug_build_guard::_InputArray const &,class cv::debug_build_guard::_OutputArray const &,int,int)" (?cvtColor@cv@@YAXABV_InputArray@debug_build_guard@1@ABV_OutputArray@31@HH@Z)，函数 _main 中引用了该符号
1>D:\codeshack\games101\h\Debug\h.exe : fatal error LNK1120: 7 个无法解析的外部命令
1>已完成生成项目“h.vcxproj”的操作 - 失败。
========== 生成: 成功 0 个，失败 1 个，最新 0 个，跳过 0 个 ==========

```

打开属性链接器输入添加opencv_world460d.lib

vc++目录添加opencv-vc14-lib

把vc15-lib也加进去，如果文件是在bin中注意更改！目的是让系统找到该文件，还有文件版本号有的人会不一样

# x86与x64区别
x64是64位，x86是32位

## 内存寻址能力区别

32位系统寻址能力是4G容量，不过需要保留一些给硬件使用，因此留给用户的可用内存一般是3.25g-3.5G容量左右，即使你插上8G内存，也无法识别那么大容量，而64位系统可以支持128GB大内存，甚至更大。

## 运算速度区别

安装64位系统，需要CPU必须支持64位，而64位CPU GPRs的数据宽度为64位，64位指令集可以运行64位数据指令，也就是说处理器一次可提取64位数据，比32位提高了一倍，理论上性能会相应提升一倍。

## 设计初衷区别

64位操作系统的设计初衷是为了满足机械设计和分析、三维动画、视频编辑和创作，以及科学计算和高性能计算应用程序等领域中需要大量内存和浮点性能的客户需求，而32位系统初期并没有考虑太多。有些dll进行编译时只能使用x64
