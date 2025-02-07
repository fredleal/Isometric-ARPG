# 🎮 Isometric ARPG - OpenGL & C++

![Isometric ARPG](https://your-image-link-here)  

Este é um projeto de um **jogo ARPG isométrico**, inspirado no estilo de **Diablo 1**, desenvolvido com **C++, OpenGL, GLSL e CUDA**.

---

## 📌 **Status do Projeto**
✅ Ambiente de desenvolvimento configurado  
✅ Renderização inicial com OpenGL  
✅ Implementação de câmera isométrica  
✅ Criação do sistema de tiles  
🔜 Próximos passos: Implementar um personagem móvel e interações com o mapa  

---

## 🚀 **Configuração do Ambiente**
### 1️⃣ **Instalar as Dependências**
```sh
sudo apt install git cmake g++ glfw3 glm
```

### 2️⃣ **Clonar o Repositório**
```sh
git clone https://github.com/seu-usuario/Isometric-ARPG.git
cd Isometric-ARPG
```

### 3️⃣ **Compilar o Projeto**
```sh
g++ src/opengl_tilemap.cpp src/Camera.cpp src/Tile.cpp src/glad.c -o build/opengl_tilemap -Iinclude -I./src -I/mingw64/include -L/mingw64/lib -lglfw3 -lopengl32
./build/opengl_tilemap
```

---

## 🖥 **Tecnologias Utilizadas**
- **C++**
- **OpenGL**
- **GLFW**
- **GLM**
- **CUDA** (Planejado para otimizações futuras)

---

## 📚 **Conceitos de Computação Gráfica**
### 🎯 **Pipeline Gráfico**
- **Vertex Shader**: Manipula vértices e transforma no espaço 3D.
- **Fragment Shader**: Define as cores finais dos pixels.
- **Rasterização**: Converte objetos geométricos em pixels renderizados.

### 🎯 **Transformações Utilizadas**
- **Projeção Ortográfica (Visão Isométrica)**  
- **Transformação de Câmera com `glm::lookAt()`**  
- **Manipulação de Matriz de Projeção com `glm::ortho()`**  

---

## 📖 **Referências**
- [OpenGL Documentation](https://www.opengl.org/documentation/)
- [Learn OpenGL](https://learnopengl.com/)
- [GLM Docs](https://glm.g-truc.net/0.9.9/index.html)

---

## 🔮 **Próximos Passos**
🔜 Implementar um **personagem móvel** no mapa.  
🔜 Criar diferentes **tipos de terreno** no tilemap.  
🔜 Adicionar **colisão e lógica de movimentação**.  

📌 **Desenvolvido com C++, OpenGL e muito café ☕🔥**
