---
layout: page
title: Docker Q&A
nav_exclude: true
---

## Docker Questions and Answers

**Your Asked Questions:**

1. **Should we create images or containers each time, even in the case of a config file change?**
    - No, you don't need to create images or containers each time there's a change in the config file. You can use Docker volumes to share files between the container and the host, allowing you to restart the container if there are changes in config files.
    - [Docker Volumes](https://docs.docker.com/storage/volumes/) - Learn about using volumes for persistent data.

2. **What are the policies of Docker restart?**
    - Docker provides various restart policies to manage how containers behave after exits or on Docker restarts.
    - [Docker Restart Policies](https://docs.docker.com/config/containers/start-containers-automatically/) - Understand different restart policies in Docker.

3. **How can we manage one container to start after another? Is the order of containers in a Docker Compose file important?**
    - Use `depends_on` in your Docker Compose configuration. The order of containers in the Docker Compose file itself is not important. However, you can define a health check test for your container to ensure it's healthy; otherwise, Docker assumes it is healthy after running the container.
      Consider that the first health check will run 10s after the start of `service1`, and then it starts `service2`.

    ```
    yaml
    version: '3'

    services:
      service1:
        image: your-service1-image
        healthcheck:
          test: ["CMD", "curl", "-f", "http://localhost:8080/health"]
          interval: 10s
          timeout: 5s
          retries: 3

      service2:
        image: your-service2-image
        depends_on:
          service1:
            condition: service_healthy
    ```

    - You can change the start command of the second service, but it is not recommended. For example:
    
    ```
    yaml
    service2:
      command: /bin/sh -c "sleep 30 && start-service2-command"
    ```
