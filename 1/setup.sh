# Installs homebrew (install script from the homebrew website: https://brew.sh/)
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Installs Visual Studio Code using the homebrew package manager
brew install --cask visual-studio-code

# Should already be installed, but make sure
brew install gcc
