# 约瑟夫环问题
1. 输出数的时候把值改为0，通过if把0的避开
2. 从第一个人开始报数，报到 m 时，此人出圈，设定变量 j，每次统计出圈的人数，当出圈人数到 m 时，重新开始统计。n 个人围坐一圈，可看作环状，设定 k 表示出圈人的下标，则出圈人的下标的计算可用“(k+l)%n”表示。
3. 