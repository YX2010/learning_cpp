# UserProfile(用户档案)

一份用户档案（userpfofile）风含以下内容：<br>
 * *登录记录*<br>
 * *实际姓名*<br>
 * *登入次数*<br>
 * *猜过次数*<br>
 * *猜对次数*<br>
 * *等级*（包括初级，中级，高级，专家）<br>
 * *猜对百分比*（可裡计算获得，或将其值存储起来备用）<br>

### 任务要求：
  写出一个名为 **UserProfile** 的 *class*， 提供以下操作：
 * *输入*<br>
 * *输出*<br>
 * *相等测试*<br>
 * *不等测试*<br>
 * constructor必须能够处理默认用户的等级在、默认的登录名称（"guset")<br>
 * 对同样名为guest的多个用户，保存每个guest有他自己的独有登录会话

### Update
*
```shell
_itoa( id++, buffer, 10);
```
改变成<br>
```shell
to_string( id++);
```

* 
```cpp
inline UserProfile::UserProflie(string login, uLevel level)
inline UserProfile::UserProfile()
```
变成<bt>
```cpp
UserProflie::UserProfile(string login, uLevel level)
UserProfile::UserProfile()
```
