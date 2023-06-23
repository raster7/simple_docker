## Part 1. Ready-made docker

##### Take the official docker image from nginx and download it using docker pull.

![1.1](img/1.png)

##### Check for the docker image with docker images

![1.2](img/2.png)

##### Run docker image with `docker run -d [image_id|repository]`

##### Check that the image is running with `docker ps`

##### View container information with `docker inspect [container_id|container_name]`

![1.3](img/3.png)

##### From the command output define and write in the report the container size, list of mapped ports and container ip

![1.4.1](img/5.png)

![1.4.2](img/6.png)

![1.4.3](img/7.png)

##### Stop docker image with `docker stop [container_id|container_name]`
##### Check that the image has stopped with `docker ps`

![1.5](img/8.png)

##### Run docker with mapped ports 80 and 443 on the local machine with *run* command
##### Check that the **nginx** start page is available in the browser at *localhost:80*

![1.6](img/9.png)

##### Restart docker container with `docker restart [container_id|container_name]`
##### Check in any way that the container is running

![1.7](img/10.png)

## Part 2. Operations with container

##### Read the *nginx.conf* configuration file inside the docker container with the *exec* command

![2.0](img/11.png)

##### Create a *nginx.conf* file on a local machine
##### Configure it on the */status* path to return the **nginx** server status page

![2.1](img/12.png)

##### Copy the created *nginx.conf* file inside the docker image using the `docker cp` command
##### Restart **nginx** inside the docker image with *exec*
##### Check that *localhost:80/status* returns the **nginx** server status page

![2.2](img/13.png)

##### Export the container to a *container.tar* file with the *export* command
##### Stop the container
##### Delete the image with `docker rmi [image_id|repository]`without removing the container first

![2.3](img/14.png)

##### Delete stopped container

![2.4](img/15.png)

##### Import the container back using the *import* command
##### Run the imported container
##### Check that *localhost:80/status* returns the **nginx** server status page

![2.5](img/16.png)