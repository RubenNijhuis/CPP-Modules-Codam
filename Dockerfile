# Use the official Ubuntu base image
FROM ubuntu:20.04

# Set environment variables to non-interactive to avoid prompts during installation
ENV DEBIAN_FRONTEND=noninteractive

# Update the package list and install essential packages
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake \
    gdb \
    git \
    clang \
    lldb \
    valgrind \
    wget \
    curl \
    nano \
    vim \
    && rm -rf /var/lib/apt/lists/*

# Set the working directory
WORKDIR /app

COPY . .

# Default command to run when starting the container
CMD ["/bin/bash"]