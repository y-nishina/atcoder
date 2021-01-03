## 概要

[AtCoder](https://atcoder.jp/)の問題の解答&提出をおこなうためのリポジトリです。  
Mac, C++, VSCode を使用する前提です。

## ディレクトリ構成

```
.
├── .vscode
├── realtime
└── virtual
```

- `.vscode/` : VSCode の設定ファイル
- `realtime/` : リアルタイムに参加したコンテストのコードを格納する
- `virtual/` : バーチャルで参加したコンテスト（もしくは単純に過去問を解いただけ）のコードを格納する

## インストールしたもの

本リポジトリに含まれていないもので別途インストールしたもの

- VSCode のプラグイン（※不要なものもあるかも）
  - CodeLLDB
  - C/C++
  - C++ Intellisense
  - Visual Studio IntelliCode
  - Code Runner
- GCC
- atcoder-cli
- online-judge-tools

※インストール方法等は下記参考サイトの 1.を参照してください

## 参考サイト

1. [AtCoder 用 C++開発環境 (Mac 編)](https://blog.spiralray.net/cp/devenv-cpp)
2. [atcoder-cli チュートリアル](http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/)
3. [Visual studio code で競プロ環境構築[mac OS]](https://qiita.com/EngTks/items/ffa2a7b4d264e7a052c6)

## 使い方

### realtime か virtual のディレクトリに移動する

```
cd realtime
```

### コンテスト用ディレクトリを作成する

- すべての問題を一度に取得したい場合

```
acc new (コンテスト名)
```

- 取得する問題を選択したい場合

```
acc new (コンテスト名) -c inquire
```

※ `acc config default-task-choice all` を実行してデフォルトの挙動をすべて取得にしています

### 問題を解く

解きたい問題のディレクトリ以下の `main.cpp` を編集して問題を解く

### テストする

該当の `main.cpp` ファイル内にフォーカスした状態で `.vscode/tasks.json` の `CheckTestCase` のタスクを実行する

### 提出する

すべてのテストケースで AC だったら（間違ってても提出はできますが）、該当の `main.cpp` ファイル内にフォーカスした状態で `.vscode/tasks.json` の `SubmitCode` のタスクを実行する

## タスクの実行方法

- `.vscode/keybindings.json` に記述してあるショートカットキーで実行する
  - ※デフォルトのキーバインディングとかぶったりしていると実行できないかも
- もしくは `cmd + shift + P` で `Tasks: Run Task` を実行し、タスクを選択する

## コードのフォーマット

`cmd + S` でファイルを保存するとフォーマットされるように設定しています。
設定は `.vscode/settings.json` の ↓ このあたり

```
  "files.insertFinalNewline": true,
  "editor.formatOnSave": true,
  "C_Cpp.clang_format_style": "{ BasedOnStyle: Google, ColumnLimit: 120 }",
```

C++のフォーマットは Google のものをベースに ColumnLimit だけ変更しています。
その他の細かい設定等を変更したい場合はググってください。
