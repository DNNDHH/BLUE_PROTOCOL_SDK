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
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.SetPinPositionBP
	 */
	struct UWBP_ShortPinView_C_SetPinPositionBP_Params
	{
	public:
		class USBShortPinWidget*                                   Pin;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.GetPlayerShortPinComponent
	 */
	struct UWBP_ShortPinView_C_GetPlayerShortPinComponent_Params
	{
	public:
		class USBPlayerShortPinComponent*                          PlayerShortPinComponent;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.IsReleaseRayButton
	 */
	struct UWBP_ShortPinView_C_IsReleaseRayButton_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UI00[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.Construct
	 */
	struct UWBP_ShortPinView_C_Construct_Params
	{	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.UpdateKeyConfig
	 */
	struct UWBP_ShortPinView_C_UpdateKeyConfig_Params
	{	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.SetUIVisible
	 */
	struct UWBP_ShortPinView_C_SetUIVisible_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShortPinView.WBP_ShortPinView_C.ExecuteUbergraph_WBP_ShortPinView
	 */
	struct UWBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AF24[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
