cmake_minimum_required(VERSION 3.25)
project(CustomBadges)

find_package(Geode REQUIRED)

add_geode_mod(CustomBadges)

target_sources(CustomBadges PRIVATE
    src/main.cpp
)
