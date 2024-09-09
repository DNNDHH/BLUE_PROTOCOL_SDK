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
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.GetText
	 */
	struct UWBP_PhotoModeStamp_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitStamp
	 */
	struct UWBP_PhotoModeStamp_C_InitStamp_Params
	{
	public:
		int32_t                                                    StampId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitText
	 */
	struct UWBP_PhotoModeStamp_C_InitText_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModeStamp_C_BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetAlpha
	 */
	struct UWBP_PhotoModeStamp_C_SetAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetReverse
	 */
	struct UWBP_PhotoModeStamp_C_SetReverse_Params
	{
	public:
		bool                                                       bReverse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.SetSelected
	 */
	struct UWBP_PhotoModeStamp_C_SetSelected_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Construct
	 */
	struct UWBP_PhotoModeStamp_C_Construct_Params
	{	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnPrepareScreenshot
	 */
	struct UWBP_PhotoModeStamp_C_OnPrepareScreenshot_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnFinishScreenshot
	 */
	struct UWBP_PhotoModeStamp_C_OnFinishScreenshot_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.Destruct
	 */
	struct UWBP_PhotoModeStamp_C_Destruct_Params
	{	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.UpdateButtonSize
	 */
	struct UWBP_PhotoModeStamp_C_UpdateButtonSize_Params
	{	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.InitVisibility
	 */
	struct UWBP_PhotoModeStamp_C_InitVisibility_Params
	{
	public:
		bool                                                       bIsImage;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.ExecuteUbergraph_WBP_PhotoModeStamp
	 */
	struct UWBP_PhotoModeStamp_C_ExecuteUbergraph_WBP_PhotoModeStamp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModeStamp.WBP_PhotoModeStamp_C.OnClicked__DelegateSignature
	 */
	struct UWBP_PhotoModeStamp_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWBP_PhotoModeStamp_C*                               Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
