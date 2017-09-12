#!/bin/bash

set -e

jbuilder clean
jbuilder runtest
yarn refmt

