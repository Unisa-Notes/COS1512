# UNISA COS1512 Quick Reference

This repo contains the LaTex files needed to compile a set of quick reference notes for the course **Introduction to Programming II**, using the programming language C++, at the University of South Africa.

- [Accessing the Notes](#accessing-the-notes)
- [Note](#note)
- [Contributing](#contributing)
- [Units Covered](#units-covered)
- [The Code](#the-code)
  - [The Structure](#the-structure)
  - [Packages Used](#packages-used)
  - [Commands Added](#commands-added)
    - [Commands](#commands)
    - [Environments](#environments)

## Accessing the Notes

A PDF can be generated using [lualatex](https://www.luatex.org/), or [xelatex](https://tug.org/xetex/). If you want to access pregenerated PDFs, please check the [Releases](https://github.com/Unisa-Notes/COS1512/releases) section on the sidebar.

## Note
This is a work in progress, with chapters and examples to come.  
If you are able, and interested in contributing, please do!  
If there is something missing, or something that you feel needs further clarification, please open an issue.

## Contributing
Please fork this repo, make your changes, and then open a pull request.

## Units Covered
- Unit 0: COS1511 Reference
- Unit 1: Overloading and Assert Macro
- Unit 2: I/O Streams
- Unit 3: Strings and Vectors
- Unit 4: Pointers and Dynamic Arrays
- Unit 5: Defining Classes
- Unit 6: Friends and Overloaded Operators
- Unit 7: Separate Compilation (Abstract Data Types)
- Unit 8: Recursion
- Unit 9: Inheritance
- Unit 10: Templates

## The Code
### The Structure
- The file [notes.tex](notes.tex) contains the general structure and order of the files. Building this file should build all the other `.tex` files, and include them in one `.pdf` called `notes.pdf`
- Each unit has a separate `tex` file where the notes are written. These are contained in the [units](./units) folder, with a sepparate folder for each unit.
- The styles, commands and packages used are in the package file [nostestyles.sty](notestyles.sty)

### Packages Used
TeX packages that have been used are:
- [babel](https://ctan.org/pkg/babel): Use description environment, and chapter renaming
- [changepage](https://ctan.org/pkg/changepage): Allow paragraphs to be indented
- [enumitem](https://ctan.org/pkg/enumitem): Used to improve the way lists are displayed
- [fancyhdr](https://ctan.org/pkg/fancyhdr): Improve header and footer display
- [fontenc](https://ctan.org/pkg/fontenc), [unicode-math](https://ctan.org/pkg/unicode-math), [xcharter](https://ctan.org/pkg/xcharter), [cabin](https://ctan.org/pkg/cabin), [xcharter-math](https://ctan.org/pkg/xcharter-math), [sourcecodepro](https://ctan.org/pkg/sourcecodepro): Font display
- [geometry](https://ctan.org/pkg/geometry): Used for document margins
- [hyperref](https://ctan.org/pkg/hyperref): Add PDF bookmarks
- [minted](https://ctan.org/pkg/minted): Used to display code with syntax highlighting
- [subfiles](https://ctan.org/pkg/subfiles): Allow `tex` files to be written separately, but built together
- [tabularray](https://ctan.org/pkg/tabularray): Better table display and management.
  * Also uses libraries to simulate [booktabs](https://ctan.org/pkg/booktabs) and [varwidth](https://ctan.org/pkg/varwidth)
- [tcolorbox](https://ctan.org/pkg/tcolorbox), [adjustbox](https://ctan.org/pkg/adjustbox): Create colored boxes for different environments
- [xcolor](https://ctan.org/pkg/xcolor): Used to get more colors
- [xstring](https://ctan.org/pkg/xstring): Analyze strings given as arguments to an environment


### Commands Added
For intellisense, a list of the commands is added in the [package_intellisense](./package_intellisense/) folder. These have been written in formats that can be understood by different LaTeX tools.

#### Commands
- `addfile [input] {<filename>}`: Include or input the file into the document. By default, it includes the file, the option `input` can be given to input it instead.
- `concept {text}`: Mark specific text as a concept to be learned. Puts the text in bold.
- `nl`: Force a line break within a cell in a table
- `question {text}`: Mark specific text as a question. Puts the text in bold, and adds extra spacing.
- `rulebookend`: Insert a decorative horizontal line at the end of the text.
- `rulechapterend`: Insert a decorative horizontal line at the end of each unit.

#### Environments
- `codebox {title}`: Colored box used to highlight code
- `definition {title}`: Colored box used for highlighting important concepts.
- `example`: Colored box used to highlight examples.
- `exercise {title}`: Colored box used to highlight exercises.
- `indentparagraph`: Indent selected text to the left.
- `sidenote`: Colored box used to indicate extra information.

---