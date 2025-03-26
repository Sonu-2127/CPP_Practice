# Use an official development image (e.g., Debian-based)
FROM mcr.microsoft.com/devcontainers/cpp:1-bullseye

# Install any additional dependencies (modify as needed)
RUN apt-get update && apt-get install -y \
    cmake \
    ninja-build \
    gdb \
    valgrind \
    && rm -rf /var/lib/apt/lists/*

# Set the workspace directory
WORKDIR /workspace

# Ensure the `vscode` user has permissions
RUN usermod -aG sudo vscode

# Set the default user
USER vscode

# Define default shell
SHELL ["/bin/bash", "-c"]
