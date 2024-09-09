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
	 * Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.RemoveFromParentPrePostProcess
	 */
	struct USBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.AddToViewportPrePostProcess
	 */
	struct USBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.RemoveFromParentPrePostProcess
	 */
	struct USBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.AddToViewportPrePostProcess
	 */
	struct USBUIExtendRendererSubsystem_AddToViewportPrePostProcess_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
