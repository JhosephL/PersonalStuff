
<br>
<h1 align="center">
    GIT COMMANDS
</h1>
<br>
<br>



# Git Configuration
<br>

Command | Description
------- | -----------
`git config --global user.name "<USERNAME>"` | Configure the user name.
`git config --global user.email "<EMAIL>"` | Configure the email address.
`git config --global core.editor "<any text editor>"` | Configure a specific text editor.
`git config --list` | Show the current configuration.



<br>
<br>
<br>
<br>



# Git on Local Control
<br>
<br>


## Git initial
<br>

Command | Description
------- | -----------
`git init` | Create a local repository.
`git status` | Show the repository status.


<br>
<br>


## Git add
<br>

Command | Description
------- | -----------
`git add <FILE>` | Add a file to the staging area.
`git add .` | Add all files to the staging area.


<br>
<br>


## Git commit
<br>

Command | Description
------- | -----------
`git commit <PATHFILE> -m "<MSG>"` | Commit a file.
`git commit -m "<MSG>"` | Commit all files.
`git commit -am "<MSG>"` | Add and commit all files.


<br>
<br>


## Git list
<br>

Command | Description
------- | -----------
`git ls-files` | Show repository files.
`git ls-lrt` | Show branch files.


<br>
<br>


## Git log
<br>

Command | Description
------- | -----------
`git log` | Show commits record.
`git log --oneline` | Show each log event in one line.
`git log <BRANCHNAME>` | Show commits record of a branch.
`git log --oneline <BRANCHNAME>` | Show commits record of a branch in one line.
`git log --graph` | Show each log referent to a branch.


<br>
<br>


## Git branch
<br>

Command | Description
------- | -----------
`git branch` | Show branches.
`git branch -a` | Show all branches.
`git branch <BRANCHNAME>` | Add a branch.
`git switch <BRANCH>` | Move between branches.
`git branch -d <BRANCHNAME>` | Remove a local branch.
`git branch --cached <BRANCHNAME>` | Remove a file from the repository.


<br>
<br>


## Git check-out
<br>

Command | Description
------- | -----------
`git checkout` | Show the current branch.
`git checkout <BRANCH>` | Add and switch to a new branch.
`git checkout--<FILENAME>` | Revert changes before a commit.


<br>
<br>


## Git difference
<br>

Command | Description
------- | -----------
`git diff <FILENAME>` | Show differences between the file and its snapshot.
`git diff <COMMIT> <ANOTHER_COMMIT>` | Show the differences between commits.
`git diff <BRANCH> <ANOTHER_BRANCH>` | Show the differences between branches.


<br>
<br>


## Other commands
<br>

Command | Description
------- | -----------
`git merge <BRANCH>` | Merge changes from the current branch to another.
`git rm <BRANCHNAME>` | Remove a file from everywhere.



<br>
<br>
<br>
<br>



# Git on Remote Control
<br>
<br>


## Git pull
<br>

Command | Description
------- | -----------
`git pull <BRANCH>` | Pull a branch.
`git pull <REPO> <BRANCH>` | Pull a branch specifying a repository.
`git pull <REPO> <BRANCH> --allow-unrelated-histories` | Solve the "fatal: refusing to merge unrelated histories" error.


<br>
<br>


## Git push
<br>

Command | Description
------- | -----------
`git push <BRANCH>` | Push a branch.
`git push <REPO> <BRANCH>` | Push a branch specifying a repository.
`git push -u <REPO> <BRANCH>` | Authenticate local changes to a remote repository.
`git push --set-upstream <REPO> <BRANCH>` | Upload changes to a repository.
`git push origin -d <BRANCH>` | Remove a remote branch.


<br>
<br>


## Git remote
<br>

Command | Description
------- | -----------
`git remote` | Show the list of repositories.
`git remote -v` | Show information about repositories.
`git remote rename <OLDNAME> <NEWNAME>` | Rename a repository.
`git remote add <REPO> <URL>` | Connect Git to a remote repository.
`git remote remove` | Remove a repository.
`git remote rm <REPO>` | Remove a repository specifying a repository.


<br>
<br>


## Other commands
<br>

Command | Description
------- | -----------
`git clone "<URL>"` | Download a repository with changes tracking.
`git fork "<URL>"` | Download a repository without changes tracking.
`git fetch <REMOTE_BRANCH_PATH>` | Update remote-tracking branches.
`git archive master --format=zip -output=../<FILE>.zip` | Shelve a branch locally.



<br>
<br>
<br>
<br>



<br>
<h1 align="center">
    GIT FLOW
</h1>
<br>
<br>
<br>


![Git's working scheme](https://github.com/JhosephL/PersonalStuff/assets/68712197/7c960ab4-bc49-4b70-897b-4d853afe35ba)
