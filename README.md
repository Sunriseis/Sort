# Sorting Algorithm
排序算法包括直接插入和冒泡排序

视频地址：https://www.bilibili.com/video/BV1Cr4y1J7iQ/?spm_id_from=333.788&vd_source=48590f4b76fd742be5c46b557c84ddbd

![091ce743afeb395db4a86f67b790421](https://github.com/Sunriseis/Sort/assets/135320840/1dd4e5a2-0128-4ff8-aa07-68418cdadb96)

这个 Git 命令是用来配置 Git 的 URL 替换规则。具体来说，git config --global url."https://".insteadOf git:// 的含义是：
将 Git 协议（git://）的 URL 替换为 HTTPS 协议（https://）的 URL。
通常情况下，Git 使用不同的协议来获取远程仓库的内容。git:// 是 Git 自带的传输协议，而 https:// 则是基于 HTTP/HTTPS 的协议。
通过执行上述命令，您告诉 Git 在执行克隆（clone）、拉取（pull）等操作时，将使用 git:// 开头的 URL 替换为以 https:// 开头的 URL。这有助于解决在某些网络环境下使用 git:// 协议受限的问题，因为 https:// 协议通常会更容易通过防火墙或代理服务器。
请注意，使用 git:// 协议和 https:// 协议连接到远程仓库可能会有一些细微的性能差异和权限要求。根据您的具体情况，可能需要选择适合您的网络环境和需求的协议。
如果您执行了这个命令，并且您之前使用的是 git:// 协议的 URL，那么之后的 Git 操作将会自动使用 https:// 协议进行连接。




