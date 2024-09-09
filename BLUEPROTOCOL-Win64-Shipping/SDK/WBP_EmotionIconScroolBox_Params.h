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
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetDragableItem
	 */
	struct UWBP_EmotionIconScroolBox_C_SetDragableItem_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F37J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetSelectedIcon
	 */
	struct UWBP_EmotionIconScroolBox_C_SetSelectedIcon_Params
	{
	public:
		class UObject*                                             InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.IsEnableEmoteIcon
	 */
	struct UWBP_EmotionIconScroolBox_C_IsEnableEmoteIcon_Params
	{
	public:
		class FName                                                EmoteId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsEnable;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7NUZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.UpdateEmoteIconEnable
	 */
	struct UWBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable_Params
	{	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ClearEmotionSlot
	 */
	struct UWBP_EmotionIconScroolBox_C_ClearEmotionSlot_Params
	{	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.RefreshEmotion
	 */
	struct UWBP_EmotionIconScroolBox_C_RefreshEmotion_Params
	{
	public:
		TArray<class FString>                                      InEmotionList;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionEmptySlot
	 */
	struct UWBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot_Params
	{
	public:
		int32_t                                                    InSlotCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionIcon
	 */
	struct UWBP_EmotionIconScroolBox_C_CreateEmotionIcon_Params
	{
	public:
		TArray<class FString>                                      InEmotionList;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Destruct_Emotion
	 */
	struct UWBP_EmotionIconScroolBox_C_Destruct_Emotion_Params
	{	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Event_OnSelectEmotionItem
	 */
	struct UWBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ExecuteUbergraph_WBP_EmotionIconScroolBox
	 */
	struct UWBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XUGU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.OnSelectEmotionItem__DelegateSignature
	 */
	struct UWBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature_Params
	{
	public:
		class UEmotionMenu_Item_C*                                 InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
