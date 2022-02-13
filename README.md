# quadratic-utils
An easy-to-use utility for getting information on quadratic equations

### Installing
Make sure you have `cmake`, `git`, and `build-essential` installed.
```bash
git clone https://github.com/ryanfortner/quadratic-utils.git
cd quadratic-utils
mkdir build; cd build; cmake ..
make
```
These steps will generate a binary file called `quadratic-utils`. You can either run this binary directly, or install it with the following command:

```
sudo make install
```

### Uninstalling
Open a terminal in the `quadratic-utils/build` folder and run `sudo make uninstall`.

You can also simply delete `/usr/local/bin/quadratic-utils`.
