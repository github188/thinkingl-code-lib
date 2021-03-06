#pragma once

enum EDIPFunction
{
	DIP_Invalid = 0,			// 无效功能.
	DIP_RGB2Gray_HSI,			// RGB转灰度图, HSI方式.
	DIP_RGB2Gray_YUV,			// RGB转灰度图, YUV方式	

	DIP_Spatial_Rotation,		// 旋转.
	DIP_Spatial_Translation,	// 坐标系转换.
	DIP_Spatial_Scaling,			// 缩放.

	DIP_IntensityLevels,		// 修改亮度等级.
	DIP_IntensityNegitive,		// 反转. s = L-1-r
	DIP_IntensityLog,			// 取指. s = c * Log( 1+r )
	DIP_IntensityPower,			// 幂值, Power-law (Gamma) Transformation. s = c * r^v 
	DIP_IntensityBitsPlaneReconstruct,	// 位图的各位重构.
	DIP_IntensityBitsPlaneShow,	// 位图的各位分拆显示.
	DIP_IntensityHistogramEqualization,	// 直方图平衡.

	DIP_NoiseGaussian,			// 高斯噪声.
	DIP_NoiseSaltAndPepper,		// 椒盐噪声.

	DIP_NoiseSpatialMeanFilter,	// 空间均值滤波.
	DIP_NoiseSpatialMedianFilter,	// 空间中值滤波.

	DIP_FrequencyFourierTransform,	// 傅立叶变换.

	DIP_Compression_DCT,			// 图像压缩, 离散余弦转换.

	DIP_Restoration_Problem,		// 图像修复, 题目.

	DIP_EdgeDetection,				// 边界检测.
};

// 常数π
#define PI 3.1415926535
// end of the file

