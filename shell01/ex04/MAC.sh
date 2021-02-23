#!/bin/bash

ifconfig | grep ether | cut -c8-24
