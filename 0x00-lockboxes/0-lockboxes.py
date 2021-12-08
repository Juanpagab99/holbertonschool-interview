#!/usr/bin/python3
"""Write a method that
determines if all the
boxes can be opened."""


def canUnlockAll(boxes):
    """Can be opened or not?"""
    llaves = [0]
    for key in llaves:
        # print(key)
        for i in boxes[key]:
            if i not in llaves and i < len(boxes):
                llaves.append(i)
    if len(llaves) == len(boxes):
        return True
    return False
