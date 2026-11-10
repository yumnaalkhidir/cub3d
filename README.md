# cub3d

A Wolfenstein-3D-style raycasting engine built with MinilibX. It parses a `.cub` map file and renders a textured, first-person 3D view of the map in real time.

A group project with [oqaroot](https://github.com/oqaroot).

## Concepts covered
- The Digital Differential Analyzer (DDA) raycasting algorithm
- Perspective-correct wall height and texture mapping
- `.cub` map file parsing and validation
- Real-time rendering and keyboard input via MinilibX

## Build & run
```sh
make
./cub3D scene.cub
```
Move with `W`/`A`/`S`/`D`, look with the arrow keys, exit with `ESC`.

---
Part of the 42 School curriculum.
