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
- [x] Run subprocess, `fork()` `exec()`
    - [x] No args `gsh -c ls`
    - [x] Support args `gsh -c "ls /tmp"`
- [x] Search bin in $PATH (execvp)
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
- [ ] Support pipes (fork and exec all, plumbing with stdin/stdout)
- [ ]
- [ ]
- [ ]
