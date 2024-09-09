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
	 * Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWPB_CharaselectDebugbButton_C_BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.Initialize
	 */
	struct UWPB_CharaselectDebugbButton_C_Initialize_Params
	{
	public:
		class FString                                              StateName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Command;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_CharacterSelectCaptureOne_C*>             CharacterSelectCaptureOne;                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C.ExecuteUbergraph_WPB_CharaselectDebugbButton
	 */
	struct UWPB_CharaselectDebugbButton_C_ExecuteUbergraph_WPB_CharaselectDebugbButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
