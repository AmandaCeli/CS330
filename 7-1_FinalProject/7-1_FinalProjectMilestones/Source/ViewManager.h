///////////////////////////////////////////////////////////////////////////////
// viewmanager.h
// ============
// manage the viewing of 3D objects within the viewport
//
//  AUTHOR: Brian Battersby - SNHU Instructor / Computer Science
//	Created for CS-330-Computational Graphics and Visualization, Nov. 1st, 2023
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "ShaderManager.h"
#include "camera.h"

// GLFW library
#include "GLFW/glfw3.h" 

class ViewManager
{
public:
    // Constructor / Destructor
    ViewManager(ShaderManager* pShaderManager);
    ~ViewManager();

    // Create the GLFW window and setup OpenGL context
    GLFWwindow* CreateDisplayWindow(const char* windowTitle);

    // Prepare the 3D scene view (camera and projection setup)
    void PrepareSceneView();

    // Process keyboard events for camera movement and projection toggling
    void ProcessKeyboardEvents();

    // Static callback methods for mouse input
    static void Mouse_Position_Callback(GLFWwindow* window, double xpos, double ypos);
    static void Mouse_Scroll_Callback(GLFWwindow* window, double xoffset, double yoffset);  // <-- NEW

private:
    ShaderManager* m_pShaderManager;
    GLFWwindow* m_pWindow;
};