# c-tutorials

[一週間で身につくC言語の基本](https://c-lang.sevendays-study.com/index.html )の練習問題をもとに、Google Testで実行可能な形式に改題した問題を収録しています。

etrobo-funではC言語に慣れていない人向けに、チュートリアルとしてこのリポジトリにある問題を実装して、テストカバレッジを100%にしてもらいます。

## 準備

### 環境構築

etrobo環境を構築済みとする。いずれの操作もetrobo環境で行うこと。

```console
$ cd ~
$ git clone --recursive git@github.com:etrobo-fun/c-tutorial
$ cd c-tutorial
$ cd external/googletest
$ mkdir build
$ cd build
$ cmake ..
$ make
$ cd ../../..
$ make
$ ./test_all # 失敗するはず
```

### 演習実施時

etrobo環境を起動し、vscodeのターミナル上で下のコマンドを実行。

```console
code ~/c-tutorial
```

## 問題一覧

- [1. 最も基本的なプログラム（1日目）](probs/prob-1.md)
- [2. 演算と変数（2日目）](probs/prob-2.md)
- [3. 条件分岐（3日目）](probs/prob-3.md)
- [4. 繰り返し処理（4日目）](probs/prob-4.md)
- [5. 配列変数（5日目）](probs/prob-5.md)
- [6. 関数（6日目）](probs/prob-6.md)
- [7. ファイル分割（7日目）](probs/prob-7.md)
- [ex4. ポインタとアドレス（応用2日目・応用3日目）](probs/prob-ex4.md)
- [ex5. 文字列とポインタ（応用4日目）](probs/prob-ex5.md)
- [ex6. 構造体（応用5日目）](probs/prob-ex6.md)
- [ex7.ファイルの読み書き（応用6日目）](probs/prob-ex7.md)
