```sh
pip install -v -e .

# c++ -pthread -fno-strict-overflow -Wsign-compare -Wunreachable-code \
#    -DNDEBUG -g -O3 -Wall -fPIC -fPIC \
#    -I.venv/include -I"${HOME}/.local/share/uv/python/cpython-3.12.10-linux-x86_64-gnu/include/python3.12" \
#    -c my_module.cpp -o my_module.o
# c++ -pthread -fno-strict-overflow -Wsign-compare -Wunreachable-code \
#    -DNDEBUG -g -O3 -Wall -fPIC -shared \
#    -Wl,--exclude-libs,ALL -LModules/_hacl \
#    -Lmy_module.o -L"${HOME}/.local/share/uv/python/cpython-3.12.10-linux-x86_64-gnu/lib" \
#    -o my_module.so
```