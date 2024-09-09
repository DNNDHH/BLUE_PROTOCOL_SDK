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
	 * Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	 */
	struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOpenColorIOColorConversionSettings                 ConversionSettings;                                      // 0x0008(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTexture*                                            InputTexture;                                            // 0x0060(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              OutputRenderTarget;                                      // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
	{
	public:
		TArray<struct FSceneViewExtensionIsActiveFunctor>          IsActiveFunctions;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
	{
	public:
		struct FSceneViewExtensionIsActiveFunctor                  IsActiveFunction;                                        // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	 */
	struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    InDisplayConfiguration;                                  // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	 */
	struct UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params
	{	};

	/**
	 * Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	 */
	struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
	{
	public:
		struct FOpenColorIODisplayConfiguration                    InDisplayConfiguration;                                  // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
		struct FSceneViewExtensionIsActiveFunctor                  IsActiveFunction;                                        // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOpenColorIODisplayExtensionWrapper*                 ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
