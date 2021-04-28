# Green Shell

A simple shell written as an exercise for Bradfield School of Computer Science Operating Systems course.

## Quick Start

```sh
make
make install
gsh
```

## Roadmap

- [ ] Main repl loop, echo input back to stdout
- [ ] Implement a way to exit, EOF
- [ ] Execute shell with command arg `-c` then exit
- [ ] Run subprocess, `fork()` `exec()`
    - [ ] No args `gsh -c ls`
    - [ ] Support args `gsh -c "ls /tmp"`
- [ ] Support Builtins
    - [ ] cd (PWD ?)
    - [ ] history (stretch)
    - [ ] ↑ (stretch)
- [ ] Signal Handling
    - [ ] SIGINT
    - [ ] SIGSTOP
    - [ ] SIGKILL
- [ ]
- [ ]
- [ ]
- [ ]
