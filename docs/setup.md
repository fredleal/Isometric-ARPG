# 🛠 Configuração do Ambiente - Isometric ARPG

Este guia contém os passos para configurar o ambiente de desenvolvimento.

---

## 🔹 1️⃣ **Instalar as Dependências**
Para rodar o projeto, você precisa instalar os seguintes pacotes:

### 📌 **Linux (Ubuntu/Debian)**
```sh
sudo apt update
sudo apt install git cmake g++ glfw3 glm
```

### 📌 **Windows (MSYS2)**
```sh
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-glfw mingw-w64-x86_64-glm
```

---

## 🔹 2️⃣ **Clonar o Repositório**
```sh
git clone https://github.com/seu-usuario/Isometric-ARPG.git
cd Isometric-ARPG
```

---

## 🔹 3️⃣ **Compilar o Projeto**
```sh
g++ src/opengl_tilemap.cpp src/Camera.cpp src/Tile.cpp src/glad.c -o build/opengl_tilemap -Iinclude -I./src -I/mingw64/include -L/mingw64/lib -lglfw3 -lopengl32
./build/opengl_tilemap
```

---

## 🔹 4️⃣ **Solução de Problemas**
### ❌ **Erro: OpenGL não encontrado**
Se aparecer o erro `glad/glad.h: No such file or directory`, execute:
```sh
pacman -S mingw-w64-x86_64-glad
```

### ❌ **Erro: GLFW não instalado**
```sh
sudo apt install libglfw3-dev
```

---

✅ Agora o ambiente está configurado! 🚀
