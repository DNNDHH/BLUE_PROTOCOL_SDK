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
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.GetShortcutItemInfo
	 */
	struct UEmotionMenu_Item_C_GetShortcutItemInfo_Params
	{
	public:
		struct FShortcutItemInfo                                   OutShortcutItemInfo;                                     // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetDragable
	 */
	struct UEmotionMenu_Item_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnDragDetected
	 */
	struct UEmotionMenu_Item_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnPreviewMouseButtonDown
	 */
	struct UEmotionMenu_Item_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmptyBgColor
	 */
	struct UEmotionMenu_Item_C_SetEmptyBgColor_Params
	{
	public:
		int32_t                                                    ColorType;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetTooptipEnable
	 */
	struct UEmotionMenu_Item_C_SetTooptipEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.IsSelected
	 */
	struct UEmotionMenu_Item_C_IsSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetIconSelected
	 */
	struct UEmotionMenu_Item_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0BQU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.GetEmotion
	 */
	struct UEmotionMenu_Item_C_GetEmotion_Params
	{
	public:
		class FString                                              OutEmotion;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmpty
	 */
	struct UEmotionMenu_Item_C_SetEmpty_Params
	{	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmotion
	 */
	struct UEmotionMenu_Item_C_SetEmotion_Params
	{
	public:
		class FString                                              InEmotion;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnChangeCoolTimeEmotion
	 */
	struct UEmotionMenu_Item_C_OnChangeCoolTimeEmotion_Params
	{
	public:
		bool                                                       IsCoolTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnValidEmoteDelegate_Event_1
	 */
	struct UEmotionMenu_Item_C_OnValidEmoteDelegate_Event_1_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y78S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    EmoteId;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEmotionMenu_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.Destruct
	 */
	struct UEmotionMenu_Item_C_Destruct_Params
	{	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.Construct
	 */
	struct UEmotionMenu_Item_C_Construct_Params
	{	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.ExecuteUbergraph_EmotionMenu_Item
	 */
	struct UEmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelectRight__DelegateSignature
	 */
	struct UEmotionMenu_Item_C_OnSelectRight__DelegateSignature_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelect__DelegateSignature
	 */
	struct UEmotionMenu_Item_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
