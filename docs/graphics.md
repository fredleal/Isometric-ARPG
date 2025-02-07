# 🎨 Pipeline Gráfico - Isometric ARPG

## 📌 Introdução
O pipeline gráfico do OpenGL é dividido em estágios que processam e renderizam gráficos na GPU.

---

## 🎯 **1️⃣ Pipeline Gráfico OpenGL**
🔹 **Vertex Shader** → Processa vértices e aplica transformações 3D.  
🔹 **Fragment Shader** → Define as cores dos pixels.  
🔹 **Rasterização** → Converte a geometria em pixels.  
🔹 **Frame Buffer** → Renderiza a imagem final na tela.  

![Pipeline OpenGL](https://upload.wikimedia.org/wikipedia/commons/7/7d/Programmable_Pipeline.gif)

---

## 🎯 **2️⃣ Transformações Geométricas**
O OpenGL utiliza **matrizes** para transformar objetos no espaço 3D.

### 📌 **Matriz de Modelo (`glm::translate, glm::scale, glm::rotate`)**
Define **posição, rotação e escala** do objeto na cena.
```cpp
glm::mat4 model = glm::translate(glm::mat4(1.0f), glm::vec3(x, y, z));
```

### 📌 **Matriz de Visão (`glm::lookAt`)**
Define a **posição e direção da câmera**.
```cpp
glm::mat4 view = glm::lookAt(cameraPos, cameraTarget, cameraUp);
```

### 📌 **Matriz de Projeção (`glm::ortho` ou `glm::perspective`)**
Define **como os objetos serão projetados na tela**.
```cpp
glm::mat4 projection = glm::ortho(-7.0f, 7.0f, -7.0f, 7.0f, 0.1f, 100.0f);
```

---

## 🎯 **3️⃣ Rasterização e Renderização Isométrica**
A **rasterização** converte primitivas (triângulos) em pixels renderizados.

- **Visão Isométrica** usa **projeção ortográfica** para evitar distorções de perspectiva.
- Cada tile é **transformado no espaço da tela** usando `glm::ortho()`.

---

📖 **Referências**
- [OpenGL Documentation](https://www.opengl.org/documentation/)
- [Learn OpenGL](https://learnopengl.com/)
- [GLM Docs](https://glm.g-truc.net/0.9.9/index.html)

🔥 **Agora você entende a base do pipeline gráfico!** 🚀
