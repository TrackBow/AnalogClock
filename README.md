# ⏰ Analog Clock with C++ and Qt

This project is an implementation of a fully functional analog clock widget, developed in C++ with the Qt framework. The clock displays the current system time with smoothly moving hands for hours, minutes, and seconds.

This project was created to demonstrate proficiency with Qt's custom 2D rendering system (`QPainter`) and event-driven programming using signals and slots.

## 📸 Screenshot

<img width="627" height="504" alt="image" src="https://github.com/user-attachments/assets/efce888f-dfea-4ec7-88f5-dbcd460d699d" />

---

### ✨ What this Project Demonstrates

*   **Custom Widget Creation:** The clock is not a standard component but a widget entirely hand-drawn by overriding the `paintEvent`.
*   **2D Rendering with QPainter:** Use of `QPainter` to draw geometric shapes (polygons for the hands, rectangles and lines for the hour/minute marks).
*   **Coordinate Transformations:** Use of `translate()`, `scale()`, and `rotate()` to center the clock, make it resizable, and correctly position the hands and tick marks.
*   **Real-Time Updates:** Use of a `QTimer` and Qt's **signals and slots** mechanism to repaint the widget at regular intervals, ensuring a smooth movement for the second hand.
*   **Painting Best Practices:** Proper use of `painter.save()` and `painter.restore()` to isolate transformations and maintain a clean rendering state.

---

### 🛠️ Technologies Used

<div>
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Qt-41CD52?style=for-the-badge&logo=qt&logoColor=white" alt="Qt"/>
</div>

*   **C++** as the programming language.
*   **Qt Framework (Core & GUI)** for creating the graphical interface and managing events.
*   **Qt Creator / qmake** for project management and compilation.

---

### 🚀 How to Build and Run

**1. Prerequisites**
*   A C++ compiler (GCC, Clang, MSVC).
*   The Qt framework (version 5 or 6) must be installed.

**2. Compilation**
*   Open a terminal in the project directory and use `qmake` and `Cmake`:
