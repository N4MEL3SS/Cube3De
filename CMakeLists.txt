cmake_minimum_required(VERSION 3.21)
project(Cube3De C)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Werror)
include_directories(include/)
include_directories(libft/)
include_directories(mlx_mac/)

set(INCLUDE include/cube_3d.h
		libft/get_next_line.h
		libft/libft.h)

set(CORE source/main.c
		source/control.c
		source/control_borders.c
		source/draw_walls.c
		source/initialize.c
		source/raycasting.c
		source/utils.c)

set(PARSER source/parse.c
		source/parse_settings.c
		source/parse_map.c)

set(GNL libft/get_next_line.c)

find_library(MLX mlx mlx_mac/)
message(${MLX})

find_library(FT ft libft/)
message(${FT})

add_executable(Cube3De ${INCLUDE} ${CORE} ${PARSER} ${GNL})
target_link_libraries(Cube3De ${FT})
target_link_libraries(Cube3De ${MLX})
target_link_libraries(Cube3De z)
target_link_libraries(Cube3De "-framework OpenGL")
target_link_libraries(Cube3De "-framework AppKit")
