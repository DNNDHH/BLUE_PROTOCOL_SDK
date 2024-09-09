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
	 * Function Sound_ControlItem.Sound_ControlItem_C.SetText
	 */
	struct USound_ControlItem_C_SetText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.SetLabelTextId
	 */
	struct USound_ControlItem_C_SetLabelTextId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.GetRate
	 */
	struct USound_ControlItem_C_GetRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.UpdateBtn
	 */
	struct USound_ControlItem_C_UpdateBtn_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.SetVolume
	 */
	struct USound_ControlItem_C_SetVolume_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMute;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WWVV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.PreConstruct
	 */
	struct USound_ControlItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__Values_K2Node_ComponentBoundEvent_48_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.RequestSound
	 */
	struct USound_ControlItem_C_RequestSound_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__BtnMute_K2Node_ComponentBoundEvent_125_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_BndEvt__Volume_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.ExecuteUbergraph_Sound_ControlItem
	 */
	struct USound_ControlItem_C_ExecuteUbergraph_Sound_ControlItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P23O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.RequestSoundEvent__DelegateSignature
	 */
	struct USound_ControlItem_C_RequestSoundEvent__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sound_ControlItem.Sound_ControlItem_C.ValueChanged__DelegateSignature
	 */
	struct USound_ControlItem_C_ValueChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Volume;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bMute;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
