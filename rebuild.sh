#!/bin/sh

set -e

jbuilder clean
jbuilder runtest
yarn refmt

