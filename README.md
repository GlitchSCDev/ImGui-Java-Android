<<<<<<< HEAD
# 🛠️ Android ImGui Mod Menu

<p align="center">
  <b>Custom ImGui Mod Menu Framework for Android Games</b>
</p>

---

# 🇧🇷 Português

## 📖 Sobre o Projeto

Este projeto é um **Mod Menu baseado em Dear ImGui para Android**, desenvolvido para criação de interfaces de modificações (mods) em aplicações e jogos Android.

> ⚠️ **Nota:** Este projeto não foi desenvolvido originalmente por mim.  
> Ele foi baseado em um projeto existente e posteriormente modificado, adaptado e personalizado para atender necessidades específicas de uso e desenvolvimento.

O objetivo principal é fornecer uma base de interface gráfica utilizando ImGui, permitindo a criação de menus personalizados, controles, opções e ferramentas para projetos de modding.
---

## ⚙️ Recursos

- Interface gráfica baseada em **Dear ImGui**
- Suporte para Android
- Menu flutuante personalizado
- Renderização utilizando OpenGL
- Sistema compatível com projetos nativos
- Fácil personalização de botões, abas e opções
- Base para desenvolvimento de ferramentas de modificação

---

## 📱 Compatibilidade

Compatível com projetos Android que utilizam:

- NDK
- C++
- JNI
- OpenGL ES
- Dear ImGui

---

# 📌 Integração para usuários AIDE / CMods

Usuários que utilizam **AIDE ou CMods** podem iniciar o Mod Menu chamando o método `Start()` da `MainActivity`.

Adicione o seguinte código no local desejado:

```smali
invoke-static {p0}, Lcom/mycompany/application/MainActivity;->Start(Landroid/content/Context;)V
```

iniciando o sistema do Mod Menu dentro da aplicação.

---

## 🚀 Como utilizar

1. Compile o projeto normalmente.
2. Integre o código nativo ao aplicativo Android.
3. Execute a inicialização do Mod Menu.
4. Personalize os elementos da interface conforme sua necessidade.

---

## 🎨 Personalização

O menu pode ser adaptado para diferentes necessidades, permitindo adicionar:

- Botões
- Checkboxes
- Sliders
- Abas
- Janelas personalizadas
- Sistemas de configuração

---

## ⚠️ Aviso

Este projeto é destinado para fins educacionais, estudos de programação, desenvolvimento Android e aprendizado sobre interfaces gráficas utilizando C++/JNI.

Use somente em aplicações próprias ou onde você possui autorização.

---

---

# 🇺🇸 English

# 🛠️ Android ImGui Mod Menu

## 📖 About the Project

This project is an **Android Mod Menu based on Dear ImGui**, designed for creating modification interfaces (mods) for Android applications and games.

The main purpose is to provide a customizable graphical interface using ImGui, allowing developers to create menus, controls, options, and tools for modding projects.

---

## ⚙️ Features

- Dear ImGui based interface
- Android support
- Custom floating menu
- OpenGL rendering
- Native project compatibility
- Easy customization of buttons, tabs, and options
- Base framework for modding development

---

## 📱 Compatibility

Works with Android projects using:

- NDK
- C++
- JNI
- OpenGL ES
- Dear ImGui

---

# 📌 AIDE / CMods Integration

Users working with **AIDE or CMods** can start the Mod Menu by calling the `Start()` method from `MainActivity`.

Add the following code where you want to initialize the menu:


```smali
invoke-static {p0}, Lcom/mycompany/application/MainActivity;->Start(Landroid/content/Context;)V
```

and initializes the Mod Menu system inside the application.

---

## 🚀 Usage

1. Build the project normally.
2. Integrate the native code into your Android application.
3. Initialize the Mod Menu.
4. Customize the interface according to your needs.

---

## 🎨 Customization

The menu can be extended with:

- Buttons
- Checkboxes
- Sliders
- Tabs
- Custom windows
- Configuration systems

---

## 📖 About the Project

This project is an **Android Mod Menu based on Dear ImGui**, designed for creating modification interfaces (mods) for Android applications and games.

> ⚠️ **Note:** This project was not originally developed by me.  
> It is based on an existing project that was later modified, adapted, and customized to meet specific development and usage requirements.

The main purpose is to provide a customizable graphical interface using ImGui, allowing developers to create menus, controls, options, and tools for modding projects.
=======
# ImGui-Java-Android
>>>>>>> 3b97992e18acc80d0b56b820743c0cbff5aaa233
