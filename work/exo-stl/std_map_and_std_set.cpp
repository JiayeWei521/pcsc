/*
 * std_map_and_std_set.cpp
 *
 * STL exercise 3: std::map and std::set
 *
 * Created on: Nov 15, 2023
 *      Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <map>
#include <set>
#include <algorithm>

int main(int argc, char* argv[])
{
    using Point = std::array<double, 3>;

    std::map<std::string, Point> map1;
    // use this map to store relative coordinates of planets

    map1["sun"] = Point{0., 0., 0.};
//    map1["earth"] = Point{1., 0., 0.};
//    map1["earth"] = Point{0., 1., 0.};
    auto end = map1.end();
    auto it = map1.find("earth");
    if (it == end)
    {
        map1["earth"] = Point{1.0, 0., 0.};
    }

    // prevent appending an item with an already-existing entry
//    auto it = map1.find("earth");

    // Loop over the entries of the map and output the entire content to screen
    auto it1 = map1.begin();
    auto end1 = map1.begin();

    for (; it1 != end1; ++it1)
    {
        std::string key = it1 -> first;
        Point coordinate = it1 -> second;

        std::cout << "Key: " << key << "->";
        std::cout << coordinate[0] << ", " << coordinate[1] << ", " << coordinate[2] << std::endl;
    }

    // Create another map
    std::map<std::string, Point> map2;

    map2["mercury"] = Point{0.25, 0., 0.};
    map2["earth"] = Point{1.0, 0., 0.};
    map2["jupiter"] = Point{5.0, 0., 0.};
    map2["sun"] = Point{0., 0., 0.};

    // Create two sets (std::set) which contains only keys of the above created two maps
    std::set<std::string> set1;
    std::set<std::string> set2;

    auto it2 = map2.begin();
    auto end2 = map2.end();

    for (; it1 != end1; ++it1)
    {
        set1.insert(it1->first);
    }
    for (; it2 != end2; ++it2)
    {
        set2.insert(it2->first);
    }

    // Use function std::set_intersection to get the keys which are common in both sets.
    // Store these keys in another set.


    std::set<std::string> set_common;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(set_common, set_common.end()));

    // Based on the above set of intersected keys create a new map which contains the data corresponding to those keys only.
    std::map<std::string, Point> map_common;
}

