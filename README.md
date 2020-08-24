模块代码在watereffect里面，低耦合，移植自tortoisesvn




效果图：

![](https://github.com/wjx0912/MfcWaterEffect/blob/master/screenshot.gif)

现在的版本图片是从资源中获取，新版本可以从文件中获取，付费支持，qq：80101277

集成以下5个文件即可：


watereffect\DIB.h
watereffect\DIB.cpp
watereffect\stdex_vector.h
watereffect\WaterEffect.h
watereffect\WaterEffect.cpp



使用说明：


资源文件里面添加位图例如IDB_BITMAP_TEST，然后在OnInitDialog()添加水波纹初始化代码，以及OnTimer()做水波定式效果。
