import os
import shutil

# Cython build files
build_files = [
    r"cardstream.cp39-win_amd64.pyd", 
    r"cardstream\cardstream.cpp",
]

print('Removing old build files')
for file in build_files: 
    os.remove(file)

shutil.rmtree(r"build")