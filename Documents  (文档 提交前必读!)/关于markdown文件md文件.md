### 这是一个MARKDOWN文件

![](https://img.shields.io/github/issues/Search-For/test.svg)
![](https://img.shields.io/github/forks/Search-For/test.svg)
![](https://img.shields.io/github/stars/Search-For/test.svg)
![](https://img.shields.io/github/license/Search-For/test.svg)
![](https://img.shields.io/twitter/url/https/github.com/Search-For/test.svg?style=social)


关于**md**文件格式
>  Markdown是一种轻量级标记语言，创始人为约翰·格鲁伯（英语：John Gruber）。
>  它允许人们“使用易读易写的纯文本格式编写文档，然后转换成有效的XHTML（或者HTML）
>  文档”。这种语言吸收了很多在电子邮件中已有的纯文本标记的特性。

>由于Markdown的轻量化、易读易写特性，并且对于图片，图表、数学式都有支持，当前许多网站都
> 广泛使用Markdown来撰写帮助文档或是用于论坛上发表消息。例如：GitHub、reddit、Diaspor
> a、Stack Exchange、OpenStreetMapSourceForge等。甚至Markdown能被使用来撰写电子书。
> 

`这是代码部分`

    整段代码
    #include<stdio.h>
    #include<math.h>



```
整段代码
#include<stdio.h>
#include<math.h>
```


![](https://www.baidu.com/img/bd_logo1.png)

_Test_

*Itatic*

~~删除线~~ <s>删除线（开启识别HTML标签时）</s>

#### 普通代码


    <?php
        echo "Hello world!";
    ?>


#### JS代码　

```javascript
function test(){
	console.log("Hello world!");
}
 
(function(){
    var box = function(){
        return box.fn.init();
    };

    box.prototype = box.fn = {
        init : function(){
            console.log('box.init()');

			return this;
        },

		add : function(str){
			alert("add", str);

			return this;
		},

		remove : function(str){
			alert("remove", str);

			return this;
		}
    };
    
    box.fn.init.prototype = box.fn;
    
    window.box =box;
})();

var testBox = box();
testBox.add("jQuery").remove("jQuery");
```

#### HTML代码
```html
<!DOCTYPE html>
<html>
    <head>
        <mate charest="utf-8" />
        <title>Hello world!</title>
    </head>
    <body>
        <h1>Hello world!</h1>
    </body>
</html>
```

### 列表 Lists

#### 无序列表（减号）Unordered Lists (-)
                
- 列表一
- 列表二
- 列表三
     
#### 无序列表（星号）Unordered Lists (*)

* 列表一
* 列表二
* 列表三

#### 无序列表（加号和嵌套）Unordered Lists (+)
                
+ 列表一
+ 列表二
    + 列表二-1
    + 列表二-2
    + 列表二-3
+ 列表三
    * 列表一
    * 列表二
    * 列表三

#### 有序列表 Ordered Lists (-)
                
1. 第一行
2. 第二行
3. 第三行

#### GFM task list

- [x] GFM task list 1
- [x] GFM task list 2
- [ ] GFM task list 3
    - [ ] GFM task list 3-1
    - [ ] GFM task list 3-2
    - [ ] GFM task list 3-3
- [ ] GFM task list 4
    - [ ] GFM task list 4-1
    - [ ] GFM task list 4-2
                
----
                    

### 绘制表格 Tables

| 项目        | 价格   |  数量  |
| --------   | -----:  | :----:  |
| 计算机      | $1600   |   5     |
| 手机        |   $12   |   12   |
| 管线        |    $1    |  234  |
                    
First Header  | Second Header
------------- | -------------
Content Cell  | Content Cell
Content Cell  | Content Cell 

| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |

| Function name | Description                    |
| ------------- | ------------------------------ |
| `help()`      | Display the help window.       |
| `destroy()`   | **Destroy your computer!**     |

| Left-Aligned  | Center Aligned  | Right Aligned |
| :------------ |:---------------:| -----:|
| col 3 is      | some wordy text | $1600 |
| col 2 is      | centered        |   $12 |
| zebra stripes | are neat        |    $1 |

| Item      | Value |
| --------- | -----:|
| Computer  | $1600 |
| Phone     |   $12 |
| Pipe      |    $1 |
                
----




                
### 绘制流程图 Flowchart

```flow
st=>start: 用户登陆
op=>operation: 登陆操作
cond=>condition: 登陆成功 Yes or No?
e=>end: 进入后台

st->op->cond
cond(yes)->e
cond(no)->op
```
                    
### 绘制序列图 Sequence Diagram
                    
```seq
Andrew->China: Says Hello 
Note right of China: China thinks\nabout it 
China-->Andrew: How are you? 
Andrew->>China: I am good thanks!
```


---


### End
