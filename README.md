# backrun

如果你想执行一个长时间运行的命令行程序，但是不想在任务栏中看到程序图标，那么可以使用本程序。
本程序使用方法

```
backrun [your console program command]
```

比如，假定使用python开启一个简单的HTTP服务器，我们可以使用命令

```
python -m http.server 80
```

但是，执行后，任务栏中会一直存在一个黑框图标

![黑框图标](https://github.com/xiaovem/backrun/raw/master/images/SP-20191128-231616.png)

此时可以借助此程序，执行

```
backrun python -m http.server 80
```
那么，python会在后台运行，前台（任务栏）中就看不到黑框图标了。

如果要关闭python，只能通过任务管理器来手动关闭了。
