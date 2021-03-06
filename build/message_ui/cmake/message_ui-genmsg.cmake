# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "message_ui: 1 messages, 0 services")

set(MSG_I_FLAGS "-Imessage_ui:/home/okrengel/catkin_ws/src/message_ui/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(message_ui_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg" NAME_WE)
add_custom_target(_message_ui_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "message_ui" "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg" "std_msgs/Header"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(message_ui
  "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/message_ui
)

### Generating Services

### Generating Module File
_generate_module_cpp(message_ui
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/message_ui
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(message_ui_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(message_ui_generate_messages message_ui_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg" NAME_WE)
add_dependencies(message_ui_generate_messages_cpp _message_ui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(message_ui_gencpp)
add_dependencies(message_ui_gencpp message_ui_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS message_ui_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(message_ui
  "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/message_ui
)

### Generating Services

### Generating Module File
_generate_module_lisp(message_ui
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/message_ui
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(message_ui_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(message_ui_generate_messages message_ui_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg" NAME_WE)
add_dependencies(message_ui_generate_messages_lisp _message_ui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(message_ui_genlisp)
add_dependencies(message_ui_genlisp message_ui_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS message_ui_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(message_ui
  "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui
)

### Generating Services

### Generating Module File
_generate_module_py(message_ui
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(message_ui_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(message_ui_generate_messages message_ui_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/okrengel/catkin_ws/src/message_ui/msg/sent_msg.msg" NAME_WE)
add_dependencies(message_ui_generate_messages_py _message_ui_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(message_ui_genpy)
add_dependencies(message_ui_genpy message_ui_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS message_ui_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/message_ui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/message_ui
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(message_ui_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/message_ui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/message_ui
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(message_ui_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui
    DESTINATION ${genpy_INSTALL_DIR}
    # skip all init files
    PATTERN "__init__.py" EXCLUDE
    PATTERN "__init__.pyc" EXCLUDE
  )
  # install init files which are not in the root folder of the generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui
    DESTINATION ${genpy_INSTALL_DIR}
    FILES_MATCHING
    REGEX "${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/message_ui/.+/__init__.pyc?$"
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(message_ui_generate_messages_py std_msgs_generate_messages_py)
endif()
