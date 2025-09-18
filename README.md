# Sistema de Gestión de Documentos📄

Este proyecto en C++ simula un sistema de manejo de **contratos, facturas y documentos**, permitiendo organizar y gestionar información de manera sencilla.🛠️  

## Estructura del Proyecto📂

- **📃 Contrato.h / Contrato.cpp**: Define la clase `Contrato` y su funcionalidad.  
- **📄 Documento.h / Documento.cpp**: Define la clase `Documento`.  
- **🧾 Factura.h / Factura.cpp**: Implementa la clase `Factura`.  
- **⚙️ main.cpp**: Contiene la lógica principal del programa.  
- **🛠️ CMakeLists.txt**: Archivo de configuración para compilar con CMake.  

## Instrucciones de Compilación y Ejecución🎯  

### 🔹 Opción 1: Usando g++ directamente  
1. **Abrir Visual Studio Code o la terminal**.💻  
2. **Compilar**: 🚀  
   ```bash
   g++ -o main main.cpp Contrato.cpp Documento.cpp Factura.cpp
