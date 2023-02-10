<!-- PROJECT LOGO -->
# Open_GDSII
<p align="center">
  <br />
  <a href="https://github.com/EDA-Solutions-Limited/Open_GDSII"><strong>Explore the project »</strong></a>
  <br />
  <br />
  ·
  <a href="https://github.com/EDA-Solutions-Limited/launch_putty/issues">Report Bug</a>
  ·
  <a href="https://github.com/EDA-Solutions-Limited/launch_putty/issues">Request Feature</a>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#making-changes">Making changes</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project
Very simple implementation of a pair of scripts to import a GDSII from a fixed location. The TCL script creates a button, the other imports the GDSII. Was tested on v2016.2u11 release, meant to be placed in the APPDATA directory for auto startup and could be used to build upon more complicated application.

### Built With

* Tcl
* C


<!-- GETTING STARTED -->
## Getting Started

To get started with using this code, download the scripts into your local workspace and open "Open_GDSII.cpp". 

### Prerequisites

L-Edit must be installed.

### Installation

1. Set your design name and GDSII file in the OpenGDSII function.
2. Save this file and put the .cpp script into "%appdata%/Tanner EDA/scripts/startup.ledit".
3. Load the createButton.tcl script into L-Edit. This can be put in the open.design folder.
4. A button is now available on the toolbar. Click this button to open your GDSII file.

### Notes:
1. Limitation: only built with windows in mind

<!-- ROADMAP -->
## Roadmap
1. None

<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request


<!-- LICENSE -->
## License

MIT License

<!-- CONTACT -->
## Contact

Support - github@eda-solutions.com
