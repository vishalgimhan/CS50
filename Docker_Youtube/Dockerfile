# find name of image on Docker Hub
# copy current directory to /app in the container
# set working directory to /app
# command to run when the container starts

FROM node:alpine 
COPY . /app   
WORKDIR /app        
CMD ["node", "app.js"]    

# In terminal:
# docker build -t my-node-app .  # build the image with a tag (in the same directory as Dockerfile)
# docker images - to list images
# docker run my-node-app - to run the container

# From hub.docker.com:
# docker pull ubuntu
# docker run ubuntu # gonna both pull the image and run
# docker ps # list running containers
# docker ps -a # list all containers

# TO run ubuntu container:
# docker run -it ubuntu # it means interactive terminal, this opens the shell

# Linux Tutorial
# apt update # update the package list
# then can install new packages, other wise gives error
# pwd   # print working directory
# ls    # list files
# ls -l # list files with details
# ls -1 # list files in one column
# cd /pathname # change directory
# cd .. # go up one directory
# cd ~ # go to home directory
# ls /bin # list files in /bin directory
# mkdir newdir # make a new directory
# rmdir newdir # remove a directory
# mv oldname newname # rename a file or directory
# mv oldname /etc/oldname # move a file to another directory
# touch hello.txt # to create new file/s
# rm hello.txt # remove a file
# rm hello* # remove files with name hello
# rm -r directoryname # remove a directory and its contents

# Edit files
#apt install nano
# nano filename # open file in nano editor
# add or edit anything and ctrl+x
# cat filename # to view file contents
# more filename # to view file contents one page at a time
# click space to move next page, q to exit
# apt install less
# less filename # to view file contents one page at a time, but can scroll up and down
# head filename # to view first 10 lines of a file
# head -n 5 filename # to view first 5 lines of a file
# tail filename # to view last 10 lines of a file
# tail -n 5 filename # to view last 5 lines of a file

# Redirection - to save output to a file
# cat hello.txt > hello_copy.txt
# cat hello1.txt hello2.txt > hello_new.txt
# echo hello > hello.txt # to create a file with content
# ls -l > filelist.txt # to save output of ls -l to a file