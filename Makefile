bin = gsh

all: gsh

clean:
	rm $(bin)

gsh:
	gcc -o $(bin) main.c -Wall

install:
	@if [ -d ~/.local/bin ]; then \
		cp gsh ~/.local/bin; \
		echo "Installed to ~/.local/bin/$(bin)"; \
	elif [ -w /usr/local/bin ]; then \
		cp gsh /usr/local/bin/; \
		echo "Installed to /usr/local/bin/$(bin)"; \
	else \
	  echo "Could not install. cp ./$(bin) to your PATH"; \
	fi

.PHONY: clean install

