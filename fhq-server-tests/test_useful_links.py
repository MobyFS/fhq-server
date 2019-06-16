#!/usr/bin/env python
# -*- coding: utf-8 -*-

import libfhqcli
import fhqtest
import sys, traceback
import base64
import os
import zipfile
import shutil
import json
from pprint import pprint
import libtestusefullinks

try:
    fhqtest.init_enviroment()
    libtestusefullinks.run_tests()
finally:
    fhqtest.deinit_enviroment()

test_name = 'Testing Useful Links'

