# Use an official development image (Debian-based)
FROM mcr.microsoft.com/devcontainers/cpp:1-bullseye

# Install dependencies
RUN apt-get update && apt-get install -y \
    wget \
    ninja-build \
    gdb \
    valgrind \
    && rm -rf /var/lib/apt/lists/*

# Remove old CMake if present
RUN apt-get remove --purge -y cmake && rm -rf /usr/bin/cmake

# Install CMake 3.28.0
WORKDIR /tmp
RUN wget -qO cmake.sh https://github.com/Kitware/CMake/releases/download/v3.28.0/cmake-3.28.0-linux-x86_64.sh \
    && chmod +x cmake.sh \
    && ./cmake.sh --skip-license --prefix=/usr/local \
    && rm cmake.sh

# Ensure new CMake is used
RUN ln -sf /usr/local/bin/cmake /usr/bin/cmake \
    && cmake --version  # Verify installation

# Set the workspace directory
WORKDIR /workspace

# Ensure the `vscode` user has permissions
RUN usermod -aG sudo vscode

# Set the default user
USER vscode

# Define default shell
SHELL ["/bin/bash", "-c"]
