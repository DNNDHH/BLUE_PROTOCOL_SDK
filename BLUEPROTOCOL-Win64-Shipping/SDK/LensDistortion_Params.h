#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
	 */
	struct ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params
	{
	public:
		struct FLensDistortionCameraModel                          A;                                                       // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FLensDistortionCameraModel                          B;                                                       // 0x0024(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
	 */
	struct ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Params
	{
	public:
		struct FLensDistortionCameraModel                          CameraModel;                                             // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DistortedHorizontalFOV;                                  // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistortedAspectRatio;                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UndistortOverscanFactor;                                 // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
	 */
	struct ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params
	{
	public:
		struct FLensDistortionCameraModel                          A;                                                       // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FLensDistortionCameraModel                          B;                                                       // 0x0024(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
	 */
	struct ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLensDistortionCameraModel                          CameraModel;                                             // 0x0008(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DistortedHorizontalFOV;                                  // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistortedAspectRatio;                                    // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UndistortOverscanFactor;                                 // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              OutputRenderTarget;                                      // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutputMultiply;                                          // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutputAdd;                                               // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
