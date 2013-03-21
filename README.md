debug_log
=========

我喜欢通过打印信息来调试程序。在开发阶段， 我喜欢将debug_log.h包含进程序方便调试。

注意： 如果要打印到调试文件的话，应该只在程序的入口调用open_debug_log(), 出口调用close_debug_log(). 千万不要调用它们两次以上。因为在debug_log.h里定义的文件指针DEBUG_LOG_FILE是全局的，在未关闭的时候再fopen()一次，这不是我们所期望的。
