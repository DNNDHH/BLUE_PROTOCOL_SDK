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
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.GetShortcutItemInfo
	 */
	struct UFixedPhrase_Item_C_GetShortcutItemInfo_Params
	{
	public:
		struct FShortcutItemInfo                                   OutShortcutItemInfo;                                     // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.GetFixedPhrase
	 */
	struct UFixedPhrase_Item_C_GetFixedPhrase_Params
	{
	public:
		class FString                                              FixedPhrase;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.SetDragable
	 */
	struct UFixedPhrase_Item_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.OnDragDetected
	 */
	struct UFixedPhrase_Item_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.OnPreviewMouseButtonDown
	 */
	struct UFixedPhrase_Item_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.IsSelected
	 */
	struct UFixedPhrase_Item_C_IsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.PreConstruct
	 */
	struct UFixedPhrase_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UFixedPhrase_Item_C_BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.ExecuteUbergraph_FixedPhrase_Item
	 */
	struct UFixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelectRight__DelegateSignature
	 */
	struct UFixedPhrase_Item_C_OnSelectRight__DelegateSignature_Params
	{
	public:
		int32_t                                                    retFixedPhraseIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_16T0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFixedPhrase_Item_C*                                 InSelectedItem;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelect__DelegateSignature
	 */
	struct UFixedPhrase_Item_C_OnSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    retFixedPhraseIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZD1R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFixedPhrase_Item_C*                                 InSelectedItem;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
