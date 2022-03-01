# fix_driver_import_obfucated_by_vmp2

大致原理如下 
![img](https://github.com/aobfucated/fix_driver_import_obfucated_by_vmp2/blob/main/vmp%E5%AF%BC%E5%85%A5%E8%A1%A8%E6%B7%B7%E6%B7%86.png)


有两种思路  
1.用unicorn引擎仿真运行指令  
2.自己解析指令(像[这样](https://github.com/helloobaby/wow-IAT-fix/blob/25b17616defe41abba306a2918b82d9dbc0b2ccf/OverwatchDumpFix/import_deobfuscation.cpp#L252))


命令行:

-sec=.abc  指定混淆区段名(默认.vmp0,因为区段名可以随意改的,所以提供这个选项)


#
#
#
#


### 项目暂未完成
