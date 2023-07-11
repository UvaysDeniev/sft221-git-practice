- Open new branch
    1. Go in to folder`cd C:\Users\user\Documents\2019`
    1. Go back to main `git checkout main`
    1. Open new branch`git branch SFT-XXXXX`

- 寫完 Code
    1. `cd C:\Users\user\Documents\` 移動到資料夾
    1. `git stash list` 確認stash清單(應為空)

    1. `git branch` 確定在哪一個分支
    1. 把進度暫存`git stash`
    1. `git stash list` 確認stash清單(應有一個stash@{0}:)
    1. `git checkout main`
    1. `git fetch upstream_sft`
    1. `git merge upstream_sft/main` 
    1. `git push origin main`
    1. `git checkout SFT-xxxxx`
    1. `git rebase main`
    1. `git stash list`多檢查一次
    1. `git stash pop stash@{0}`
    1. `git stash list`再檢查一次
    1. VScode 打好 `commit` 內容
    1. `git push origin SFT-xxxx`
    1. 到 personal github 申請 PR (好像原 repository 也可以)

## 以下為細節
- 同步源頭 SFT/git_practice
    - `cd C:\Users\user\Documents\`
    - 抓下最新版本的檔案`git fetch upstream_sft`
- 將未完成的檔案暫存，方便進行和源頭的檔案merge
    - [參考資料龍哥【狀況題】手邊的工作做到一半，臨時要切換到別的任務](https://gitbook.tw/chapters/faq/stash.html)
    - 方法一 先commit再reset回來
        1. `git add --all`
        2. `git commit -m "not finish yet"`
        3. 處理其他事
        4. `git reset HEAD^`
    - 方法二
        1. 先看一下有沒有之前的舊檔`git stash list`
        2. 暫存`git stash`
        3. 確認有無暫存成功`git stash list`
    - 執行要做的事 Merge `git merge upstream/develop`  
        4. `git stash pop stash@{0}`回復(自動刪除stash@{0})
        5. (非必要)`git stash apply stash@{0}`回復(保留stash@{0})
        6. (非必要)`git stash drop stash@{0}`手動刪除