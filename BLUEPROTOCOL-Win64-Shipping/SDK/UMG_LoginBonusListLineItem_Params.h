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
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnCloseAnimationFinished
	 */
	struct UUMG_LoginBonusListLineItem_C_OnCloseAnimationFinished_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetIconExtraData
	 */
	struct UUMG_LoginBonusListLineItem_C_SetIconExtraData_Params
	{
	public:
		class UCommonIcon_C*                                       IconWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBLoginBonusWindowItemData                         ItemData;                                                // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetBtnSelected
	 */
	struct UUMG_LoginBonusListLineItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetMouseClickValue
	 */
	struct UUMG_LoginBonusListLineItem_C_SetMouseClickValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.SetData
	 */
	struct UUMG_LoginBonusListLineItem_C_SetData_Params
	{
	public:
		struct FSBLoginBonusWindowDayData                          Data;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       StumpOn;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Click;                                                   // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FI7R[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.PlayStumpAnimation
	 */
	struct UUMG_LoginBonusListLineItem_C_PlayStumpAnimation_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.OnAnimationFinished
	 */
	struct UUMG_LoginBonusListLineItem_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LoginBonusListLineItem_C_BndEvt__UMG_LoginBonusListLineItem_NormalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_LoginBonusListLineItem_C_BndEvt__UMG_LoginBonusListLineItem_PickupButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ExecuteUbergraph_UMG_LoginBonusListLineItem
	 */
	struct UUMG_LoginBonusListLineItem_C_ExecuteUbergraph_UMG_LoginBonusListLineItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OR25[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.ItemClick__DelegateSignature
	 */
	struct UUMG_LoginBonusListLineItem_C_ItemClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJLK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_LoginBonusListLineItem_C*                       SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusListLineItem.UMG_LoginBonusListLineItem_C.StumpAnimationEnd__DelegateSignature
	 */
	struct UUMG_LoginBonusListLineItem_C_StumpAnimationEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
