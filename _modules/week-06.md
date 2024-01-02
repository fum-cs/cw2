---
title: Session 06 - Exploring Docker and Containerization in Development
date: 1402-10-12
---

* [What is Docker?](https://docs.docker.com/get-started/overview/) - Introduction to Docker as an open-source platform for containerization.
* [Differences between Docker and Virtual Machines](https://www.docker.com/resources/what-container/#:~:text=Comparing%20Containers%20and%20Virtual%20Machines) - Understanding how Docker differs from traditional virtual machines.
* [Benefits of Docker](https://dzone.com/articles/top-10-benefits-of-using-docker) - Exploring the advantages of using Docker, such as consistent environments, application isolation, easy deployment, and resource efficiency.
* [Installing Docker on Linux and Windows](https://docs.docker.com/engine/install/) - Guide to installing Docker on various operating systems.
  - Linux installation: [Using Convenience Script](https://docs.docker.com/engine/install/ubuntu/#install-using-the-convenience-script#:~:text=get.docker.com)
  - Windows installation: [Docker Desktop for Windows](https://docs.docker.com/desktop/install/windows-install/)
* [Understanding Docker Images](https://docs.docker.com/get-started/overview/#images) - What constitutes a Docker image, including run commands, dependencies, and source code.
* [Difference between Docker Image and Container](https://www.geeksforgeeks.org/difference-between-docker-image-and-container/) - Clarifying the distinction between an image and a running container.
* [Basic Docker Commands](https://docs.docker.com/get-started/docker_cheatsheet.pdf) - Introduction to fundamental Docker commands like `docker images`, `docker pull`, `docker run`, and `docker ps`.
* [Creating a Dockerfile](https://docs.docker.com/language/java/build-images/) - We wrote a Dockerfile for the existing college-system example and built its image.
* [Docker Compose Usage](https://docs.docker.com/compose/) - Utilizing Docker Compose for running multi-container Docker applications.
* [Optimizing Dockerfiles](https://devopscube.com/reduce-docker-image-size/) - Reduce Docker Image Size.
* [Using Minimal Base Images](https://cloud.google.com/blog/products/containers-kubernetes/kubernetes-best-practices-how-and-why-to-build-small-container-images) - The importance of using minimalistic base images like Alpine for lighter Docker images. You can use `eclipse-temurin:17-jdk-alpine` for java.
* [Layer Caching in Docker](https://docs.docker.com/build/cache/) - Understanding the caching mechanism in Docker and the importance of the order of layers in a Dockerfile.
* [Reducing Docker Image Layers](https://emmer.dev/blog/reducing-docker-layers/) - Techniques to decrease the number of layers in a Docker image for optimization.
* [Implementing Multi-Stage Builds](https://docs.docker.com/develop/develop-images/multistage-build/) - Using multi-stage builds in Docker to reduce image size and improve efficiency.
* [Questions and Answers](pages/docker-qa) - Answers to questions that students asked during the session.


---

