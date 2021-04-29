# Green Shell

A simple shell written as an exercise for Bradfield School of Computer Science Operating Systems course.

## Quick Start

```sh
make
make install
gsh
```

## Dev

TODO

## Roadmap

- [x] Main repl loop, echo input back to stdout
- [x] Implement a way to exit, EOF
- [x] Execute shell with command arg `-c` then exit
- [ ] Run subprocess, `fork()` `exec()`
    - [ ] No args `gsh -c ls`
    - [ ] Support args `gsh -c "ls /tmp"`
- [ ] Support Builtins
    - [ ] cd (PWD ?)
    - [ ] exit (EOF)
    - [ ] history (stretch)
    - [ ] ↑ (stretch)
- [ ] Signal Handling
    - [ ] SIGINT
    - [ ] SIGSTOP
    - [ ] SIGKILL
- [ ] Run file `gsh script.sh` (stretch)
- [ ]
- [ ]
- [ ]
