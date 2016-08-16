IMGUI_FUNCTION(BeginDockspace)
CALL_FUNCTION_NO_RET(BeginDockspace)
END_IMGUI_FUNC

IMGUI_FUNCTION(EndDockspace)
CALL_FUNCTION_NO_RET(EndDockspace)
END_IMGUI_FUNC

IMGUI_FUNCTION(ShutdownDock)
CALL_FUNCTION_NO_RET(ShutdownDock)
END_IMGUI_FUNC

IMGUI_FUNCTION(SetNextDock)
OPTIONAL_ENUM_ARG(slot, 6)
CALL_FUNCTION_NO_RET(SetNextDock, (ImGuiDockSlot)slot)
END_IMGUI_FUNC

IMGUI_FUNCTION(BeginDock)
LABEL_ARG(label)
OPTIONAL_BOOL_POINTER_ARG(opened)
OPTIONAL_ENUM_ARG(extra_flags, 0)
CALL_FUNCTION(BeginDock, bool, label, opened, extra_flags)
PUSH_BOOL(ret)
END_BOOL_POINTER(opened)
END_IMGUI_FUNC

IMGUI_FUNCTION(EndDock)
CALL_FUNCTION_NO_RET(EndDock)
END_IMGUI_FUNC

IMGUI_FUNCTION(SetDockActive)
CALL_FUNCTION_NO_RET(SetDockActive)
END_IMGUI_FUNC

IMGUI_FUNCTION(DockDebugWindow)
CALL_FUNCTION_NO_RET(DockDebugWindow)
END_IMGUI_FUNC