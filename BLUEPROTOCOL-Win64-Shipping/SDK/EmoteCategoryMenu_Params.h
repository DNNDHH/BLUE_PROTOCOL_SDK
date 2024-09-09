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
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.AddHistoryEmoteIds
	 */
	struct UEmoteCategoryMenu_C_AddHistoryEmoteIds_Params
	{
	public:
		int32_t                                                    AddEmotionId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.SaveEmoteHisoryIdsData
	 */
	struct UEmoteCategoryMenu_C_SaveEmoteHisoryIdsData_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.GetEmotionList
	 */
	struct UEmoteCategoryMenu_C_GetEmotionList_Params
	{
	public:
		int32_t                                                    InSortType;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2ARE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutEmotionList;                                          // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateCategory
	 */
	struct UEmoteCategoryMenu_C_UpdateCategory_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateHistoryList
	 */
	struct UEmoteCategoryMenu_C_UpdateHistoryList_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.LoadEmoteHistoryIdsData
	 */
	struct UEmoteCategoryMenu_C_LoadEmoteHistoryIdsData_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.CreateCategory
	 */
	struct UEmoteCategoryMenu_C_CreateCategory_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnClickedEvent
	 */
	struct UEmoteCategoryMenu_C_OnClickedEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.Construct
	 */
	struct UEmoteCategoryMenu_C_Construct_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.Destruct
	 */
	struct UEmoteCategoryMenu_C_Destruct_Params
	{	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.ExecuteUbergraph_EmoteCategoryMenu
	 */
	struct UEmoteCategoryMenu_C_ExecuteUbergraph_EmoteCategoryMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnEmoteListUpdate__DelegateSignature
	 */
	struct UEmoteCategoryMenu_C_OnEmoteListUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
