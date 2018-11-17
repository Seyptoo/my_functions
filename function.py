#!/usr/bin/env python
#coding:utf-8
# @Author: Seyptoo
# @Date:   8/11/18
# @Last Modified by: Seyptoo

import sys
import re

class URI:
	def __init__(self, url):
		"""
		This function manages threads, 
		by default it's 35 :D

		Parameters
		----------
		self : X
			The parameter 'self' is a supervariable that can communicate anywhere.

		Return
		----------
		Will speed up the program
		with the threads.	
		"""
		self.__url = url

		if not(re.match('https?://(?:www)?(?:[\w-]{2,255}(?:\.\w{2,6}){1,2})(?:/[\w&%?#-]{1,300})?', self.__url)):
			return False

	def get_port(self):
		"""
		This function manages threads, 
		by default it's 35 :D

		Parameters
		----------
		self : X
			The parameter 'self' is a supervariable that can communicate anywhere.

		Return
		----------
		Will speed up the program
		with the threads.	
		"""

		if not(self.__url.count(":") == 1):
			self.__url = map(str, self.__url.split(":"))[2]
			self.__url = map(str, self.__url.split("/"))[0]

		elif(self.__url.startswith("http://") == True):
			self.__url = 80 # startswith HTTP() > 80
			# startswith HTTP() > 80

		elif(self.__url.startswith("https://") == True):
			self.__url = 443 # startswith HTTPS() > 443
			# startswith HTTPS() > 443

		return self.__url


if __name__ == "__main__":
	u = URI("https://facebook.com:7878")
	print u.get_port()
