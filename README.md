# 旋转 LED

该项目使用 STM32F103C8T6 作为主控芯片，在本项目代码中实现了对 中文、英文、字符符号 等的显示，以及部分的流水花纹显示花样。

可定制性和可移植性较高。

对于控制 LED 显示条的电机的转速，建议设置为每分钟30转左右，此时的显示效果相对来说较佳。

## 项目研究意义
随着科学技术的发展， LED显示屏得到广泛的应用，LED旋转屏利用人的视觉暂留效应，通过高速旋转的LED灯阵列，形成一个360º环形画面，创造立体效果，不管人站在那个角度都能看到显示的内容，利用这种视觉暂留效应就可以可以显示汉字，图像等，成本低廉，可视范围大，具有很高的欣赏价值，同时锻炼学生的动手能力，创新能力，实践能力，激发学生学习兴趣，引导自主才学习及培养创新能力，协作精神，工程实践素质。

## 项目研究内容
本项目是基于STM32单片机的旋转LED显示灯，主要原理是，人眼在观察景物时，光信号传入大脑神经，需经过一段短暂的时间，光的作用结束后，视觉形象并不立即消失，这种残留的视觉称“后像”，视觉的这一现象则被称为“视觉暂留”，利用这种视觉暂留效应就可以在旋转的LED显示屏上，显示完整的汉字和图像了。

单片机控制LED灯使用红外发射，在底座上有一个红外发射管，这个红外发射管不断地向旋转的主电路板发射红外线旋转的主板上有一个红处接收管采用高灵敏的方型接收管，板上的红外接收管每转动一圈就会导通一次，让单片机知道从哪一点开始播放字符或者图象具有很高的欣赏价值。

## 主要技术指标
LED数量：不少于16个

功能：能完整的显示汉字、数字、和简单的图像等。

## 创新点
单片机采用STM32，IO口比常用的51单片机数量多，单片机体积更加小，减轻板子重量。

采用红外发射管和接收管，检测电机转过圈数，比较精确。

采用直流电机，转速高，价格低廉，有些直流电机速度也较稳定。

采用废手机的电池供电或多节纽扣电池。电池重量轻，容量较大。

## 项目实施方案
主控芯片采用STM32单片机，具有较多的IO口，体积小。

电机采用直流电机，转速可以达到现实要求，旋转比较稳定。

供电采用纽扣电池或者废旧的手机电池，重量轻，体积小。

单片机控制LED灯使用红外发射，在底座上有一个红外发射管，这个红外发射管不断地向旋转的主电路板发射红外线旋转的主板上有一个红处接收管采用高灵敏的方型接收管，板上的红外接收管每转动一圈就会导通一次，让单片机知道从哪一点开始播放字符或者图象。

LED可以使用贴片或直插封装。
