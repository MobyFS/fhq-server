#!/usr/bin/env python
# -*- coding: utf-8 -*-

import fhqtest
import libtestleaks
try:
    fhqtest.init_enviroment()
    libtestleaks.run_tests()
finally:
    fhqtest.deinit_enviroment()