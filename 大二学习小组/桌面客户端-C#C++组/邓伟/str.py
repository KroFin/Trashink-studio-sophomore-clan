def getmaxstr(str1):
    max = 0
    restr = ''#存返回的字符
    newstr = str1 #newstr索引一次得到一次新的字符

    while newstr:
        j = 1
        while j<=len(newstr):
            substr = newstr[:j]#substr索引到第j个长度
            if len(substr) == len(set(substr)):#判断（剔除字符串相同的元素长度后，是否相等
                if len(substr) > max: #给max赋值
                    restr = substr
                    max = len(restr)

                else:
                    break

                
            j +=1

            newstr = searchnextstr(newstr)#索引剩下的字符

        return len(restr)
                    



def searchnextstr(str1):#索引
    return str1[1:]



print (getmaxstr('pwwkew'))
