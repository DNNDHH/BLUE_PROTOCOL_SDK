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
	 * Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.GetTextId
	 */
	struct UBP_SBPhotoModeComponent_C_GetTextId_Params
	{
	public:
		ESBPhotoModeStartState                                     State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XQ3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.BP_OnCantStartPhotoMode
	 */
	struct UBP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode_Params
	{
	public:
		ESBPhotoModeStartState                                     State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.ExecuteUbergraph_BP_SBPhotoModeComponent
	 */
	struct UBP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
