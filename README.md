# 🛒 Tienda Los García — Sistema de Gestión de Inventario en C++

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20Windows-lightgrey)](https://github.com/rodrigo47363)
[![License](https://img.shields.io/badge/License-MIT-green)](LICENSE)

> **Sistema interactivo de consola para el control de inventario, registro de proveedores, alta de empleados y transacciones de punto de venta, implementado en C++ con persistencia de datos en archivos planos.**

---

## 📋 Funcionalidades

- **Gestión de Inventario:**
  - Registro de productos (código, nombre, precio unitario, stock disponible).
  - Consulta y búsqueda en tiempo real de artículos.
  - Eliminación y actualización de existencias en catálogo.
- **Administración de Personal y Proveedores:**
  - Registro y consulta de empleados.
  - Catálogo de proveedores asociados a la distribución de mercancía.
- **Persistencia en Disco:**
  - Almacenamiento estructurado en `tienda.txt` para garantizar la persistencia de las operaciones entre sesiones.

---

## 🚀 Compilación y Ejecución

### Prerrequisitos
- Compilador de C++ (`g++` o `clang++`)
- Terminal estándar

### En Linux / macOS
```bash
# Compilar con optimización estándar
g++ -O2 -std=c++17 tienda.cpp -o tienda

# Ejecutar el sistema
./tienda
```

### En Windows (MinGW)
```cmd
g++ -O2 -std=c++17 tienda.cpp -o tienda.exe
tienda.exe
```

---

## 📂 Estructura del Proyecto

```text
tienda/
├── tienda.cpp      # Código fuente principal con lógica de negocio y menús
├── tienda.txt      # Archivo de almacenamiento persistente de datos
└── README.md       # Documentación técnica del proyecto
```

---

## ⚖️ Licencia
Distribuido bajo la Licencia **MIT**.
