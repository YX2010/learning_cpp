/*
 * File : Stack.h
 * --------------
 * 创建一个 stack 的类： 可以存储及弹出字符串
 *
 *
 *
 *
 *
 */
#include<string>
#include<vector>

using std::string;
using std::vector;

class Stack{
    public:
		// 将元素压入栈中，若正确压入，返回true，否则返回false
		// args:
		// 		elem: 待压入的元素
		// returns：
		// 		bool：若成功压入stack，返回true，否则返回false
        bool push(const string& elem);

		// 将stack中的最后一个元素弹中，并存储在elem中，同时将其删除
		// args：
		// 		elem: 弹出的元素保存在这里
		// return：
		// 		bool：成功弹出返回true，否则返回false
        bool pop(string& elem);

		/*
		 * 查看stack中最后一个元素，并将其存储在elem中
		 * args：
		 * 		elem：将stack中最后一个元素保存在这里
		 * return：
		 * 		bool：成功查看则返回true，否则为false
		 */
        bool peek(string& elem);

		/*
		 * stack是否为空
		 *
		 * return：
		 * 		bool：为空时返回true，否则返回false
		 */ 
        bool empty() const { return _stack.empty();}

		/*
		 * stack是否满
		 *
		 * return：
		 *  	bool： 为full时返回true，否则返回false
		 */
        bool full() const {return _stack.size() == _stack.max_size();};
		
		/*
		 * 返回stack中元素的个数。
		 *
		 * reutrn：
		 * 		int： stack中元素的个数
		 */
        int size() const {return _stack.size();}

    private:
        vector<string> _stack;
};
