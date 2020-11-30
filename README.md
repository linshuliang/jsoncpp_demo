# jsoncpp_demo
## Build with VS 2019 on Windows

1. 以管理员身份打开 Visual Studio Developer Command Prompt

```
C:\Windows\System32>
```

2. `mkdir -p build`
3. `cd build`
4. `cmake -DBUILD_STATIC_LIBS=ON -DBUILD_SHARED_LIBS=OFF ..`
5. `cmake --build . --config Release`
6. 将 `jsoncpp\include\json` 拷贝到 `${PROJECT_SOURCE_DIR}\3rdparty\include\` 目录下
7. 将 `jsoncpp\build\lib\Release\jsoncpp.lib` 拷贝到 `${PROJECT_SOURCE_DIR}\3rdparty\include\lib\` 目录下



## JSON 介绍

**JSON**(JavaScript Object Notation) 是一种轻量级的数据交换格式。 易于人阅读和编写。同时也易于机器解析和生成。

JSON采用完全独立语言的文本格式，但是也使用了类似于C语言家族的习惯（包括C, C++, C#, Java, JavaScript, Perl, Python等）。 这些特性使 JSON 成为理想的数据交换语言。



### JSON具有以下这些形式

* object (对象)
* array (数组)
* string (字符串)
* number (数值)
* `true`/ `false`
* `null`



对象是一个无序的 **名称/值** 集合。一个对象以 `{`左括号 开始， `}`右括号 结束。每个**名称**后跟一个 `:`冒号 ；**名称/值** 对之间使用 `,`逗号分隔。

![img](./pictures/object.png)



数组是值（value）的有序集合。一个数组以 `[`左中括号 开始， `]`右中括号结束。值之间使用 `,`逗号分隔。

![img](./pictures/array.png)







## 链接

[Build with VS 2019 on Windows](https://github.com/open-source-parsers/jsoncpp/wiki/Build-with-VS-2019-on-Windows)

[JSON 介绍 ](https://www.json.org/json-zh.html)

[API 说明](http://open-source-parsers.github.io/jsoncpp-docs/doxygen/index.html)

