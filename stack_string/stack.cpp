/*
 * File: stack.cpp
 * ---------------
 *  类stack的实现
 *
 */
#include "Stack.h"
#include <vector>

/*
 * 将元素从栈中弹出，若正确弹出，返回true，否则返回false
 * 		注：弹出后，将删除stack中的最后一个元素
 * args:
 * 		elem: 保存弹出元素
 * returns：
 * 		bool：若成功弹出stack，返回true，否则返回false
 */
bool Stack::pop(string& elem){
    if(empty()) return false;
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

/*
 * 查看stack中最后一个元素，并将其存储在elem中
 * args:
 * 		elem：将stack中最后一个元素保存在这里
 * return:
 *      bool：成功查看则返回true，否则为false
 *
 */ 
bool Stack::peek(string& elem){
    if(empty()) return false;
    elem = _stack.back();
    return true;
}

/* 
 * 将元素压入栈中，若正确压入，返回true，否则返回false
 * args:
 * 		 elem: 待压入的元素
 * return：
 * 		bool：若成功压入stack，返回true，否则返回false
 */ 
bool Stack::push(const string& elem){
    if(full()) return false;
    _stack.push_back(elem);
    return true;
}
