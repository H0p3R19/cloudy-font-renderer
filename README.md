![alt text](<Demo_Screenshots/Screenshot 2026-08-01 023216.png>)

# Cloudy Font Renderer

A simple font renderer written in C++. It takes text (uppercase English letters only) and outputs it as a PPM image.

## What it does

Cloudy renders uppercase English text into a PPM image. instead of using a bitmap or vector font, every character is manually defined as a "cloud" of points. Then, thoose points get fed into a container and then one pixel at a time , the program builds the image by checking if a pixel's position is included in the container.

You can adjust:
- Font size
- Font color
- Background color


No external libraries are used - just the C++ standard library, so any standard C++ compiler will work.

## How to run it

You'll need a C++ compiler and Make installed .You can easily install theese in most Linux/Mac systems . On Windows you can install them via [MinGW](https://www.mingw-w64.org/) or use WSL.

```bash
#Install Dependencies
sudo apt update && sudo apt install build-essential #this is an example for installing dependencies on a Debian based system. 

# Clone this repo
git clone https://github.com/H0p3R19/cloudy-font-renderer.git

# Go into the folder
cd cloudy-font-renderer

# Compile it via Make
make

# Run it
./cloudy
```

## How to wiew the output

PPM (Portable Pixmap) is a fairly uncommon image format , because of this , normal image viewers may not work. To view the image , you can use:
- online web tools such as [PPM Viewer](https://www.cs.rhodes.edu/welshc/COMP141_F16/ppmReader.html).
- Apps like [Gnu GIMP](https://www.gimp.org/) or [LibreOffice](https://www.libreoffice.org/).


## What I learned

- How to represent shapes as sets of points instead of relying on existing font formats.
- Working with the PPM image format and writing raw image data.
- Figuring out how to create different glyphs using for loops.
- Structuring C++ code around classes to keep coordinate handling clean.

## Notes

This is a learning project, so there are some limitations:
- Only supports uppercase English letters for now
- Only has a single "pixel art" style font.
- Only supports a single line of text and cannot generate multiple lines.
- Because of the hardcoded point-cloud logic , some files may be difficult to understand and work with.

## AI Disclosure

LLMs were occasionally used to help debug specific issues (e.g. explaining compiler errors). All core logic, including the point-cloud rendering and PPM output, was written by hand.


## Demos

![alt text](<Demo_Screenshots/Screenshot 2026-08-01 015815.png>)

![alt text](<Demo_Screenshots/Screenshot 2026-07-31 210307.png>)

---

Made by **Umut Gül** - feel free to check out my other projects!
