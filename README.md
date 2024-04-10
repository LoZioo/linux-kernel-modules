# linux-kernel-modules
A set of generics Linux Kernel modules.

## Notes
- To install the kernel modules headers: `sudo pacman -S linux-headers`.
- To compile the module, use the `make` command.
- To clean the workspace after a build, use the `make clean` command.
- To display module info, use `modinfo test_kernel_module.ko`.
- To load the module, use `insmod test_kernel_module.ko`.
- To unload the module, use `rmmod test_kernel_module`.
- To list the current loaded kernel modules, use `lsmod`.
- To see the `printk()` outputs, use the `dmesg` command.
