# StepByStep for git_practice

## Open new branch
1. Go in to folder`cd C:\Users\user\git_practice`
1. Go back to main `git checkout main`
1. Open new branch`git branch SFT-XXXXX`

## After finish Codeing part
1. Go in to folder `cd C:\Users\user\git_practice`
1. Make sure your stash list is empty(It should) `git stash list`
1. Make sure where are you `git branch`
1. Stash your work `git stash`
1. Check stash list(It should have [stash@{0}:]) `git stash list`
1. Go to main `git checkout main`
1. Get every update from last time, but did not merge `git fetch upstream`
1. Merge `git merge upstream/main` 
1. Update your personal github `git push origin main`
1. Go back to your working branch `git checkout SFT-xxxxx`
1. Move your working branch to newest main `git rebase main`
1. Check your stash(Not necessary step)`git stash list`
1. `git stash pop stash@{0}`
1. Check your stash(Not necessary step)`git stash list`
1. Use VScode commit your work or `git add --all` and `git commit -m "SFT-XXX Add testing code ....."`
1. `git push origin SFT-xxxx`
1. Make a PR (pull request) in personal github ( Seems upstream repository can do it too? )

## git log

- `git log --oneline --graph`


## Set up git_practice first time (only once)

- Fork git_practice to personal github
- Clone git_practice to local
    1. `cd C:\Users\user\Documents\`
    1. `git clone https://github.com/PersonalForkGithub/git-practice.git`
- Set up upstream
    1. `cd C:\Users\user\Documents\git-practice`
    1. `git remote -v`
    1. `git remote add upstream git@github.com:XXXXXX/YYYYYY.git`
