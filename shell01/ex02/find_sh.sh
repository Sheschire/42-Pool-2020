#!/bin/bash

find .  -type f  -name "*.sh" | rev | cut -c3
