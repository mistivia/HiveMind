# HiveMind

万智牌轮抽工具

目前仍处于早期阶段

## 依赖

- Boost
- [Crow](https://github.com/ipkn/crow)
- [mstch](https://github.com/no1msd/mstch)

## 构建和运行

```
git clone https://github.com/nebula-moe/hive-mind.git
cd hive-mind
make && ./hivemind
```

或者直接使用二进制发布包

```
curl https://github.com/nebula-moe/hive-mind/releases/download/v0.1.1/hivemind-release-v0.1.1-linux-amd64.tar.gz -o hivemind.tgz
tar -xf hivemind.tgz
./hivemind 8080 # start a web server listening port 8080
```

## 截图

![图片](https://user-images.githubusercontent.com/32918714/117160240-88e06e80-adf3-11eb-9315-18a98d128bcd.png)
