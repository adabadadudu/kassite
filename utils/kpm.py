#!/usr/bin/env python3

# Kassite Package Manager(kpm)
# File version : 1.1
# THIS FILE IS A PART OF KASSITE LANGUAGE
# The Kassite Programming Language
# Copyright (c) 2021 Kassite Team,
# all rights reserved.

# AUTHOR : Ashkan Laei
from urllib.request import URLopener
from sys import argv
from os import mkdir, listdir
from os.path import isdir
from sys import exit
if __name__ == "__main__":
	# if modules directory not exists , create it
	if not isdir('modules'):
		mkdir('modules')
	
	if len(argv) < 3 :
		print("Kassite Package Manager v1.1")
		print("usage : kpm [install upgrade] <lib_name>")
		exit()
	# install a library
	if argv[1] == 'install':
		for lib in argv[2:]:
			try:
				print(f"Installing {lib} ...")
				URLopener().retrieve(f'https://raw.githubusercontent.com/kassite-lang/packages/master/{lib}.ks', f'modules/{lib}.h')
			except:
				print(f"Error : Package {lib} not found")
	# upgrade a library
	elif argv[1] == 'upgrade':
		for lib in map(lambda s: s[:-2], listdir('modules')):
			try:
				print(f"Upgrading {lib} ...")
				URLopener().retrieve(f'https://raw.githubusercontent.com/kassite-lang/packages/master/{lib}.ks', f'modules/{lib}.h')
			except:
				print(f"Error : Package {lib} not found")
