#!/usr/bin/env python3

import sys

FILE_TEMPLATE = """#include <stdio.h>

/* Exercise {exercise}
 * {description}
 */

int main() {main_body}
"""

if len(sys.argv) != 3 or "help" in sys.argv[1].lower():
    print("usage: %s <exercise id> <exercise description>", sys.argv[0])
exercise = sys.argv[1]
description = sys.argv[2]
print(
    FILE_TEMPLATE.format(
        exercise=exercise,
        description=description,
        main_body="{\n\n}"
    ),
    end=""
)