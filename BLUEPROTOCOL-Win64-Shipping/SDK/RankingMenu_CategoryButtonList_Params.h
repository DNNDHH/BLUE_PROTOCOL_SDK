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
	 * Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.PreConstruct
	 */
	struct URankingMenu_CategoryButtonList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.Construct
	 */
	struct URankingMenu_CategoryButtonList_C_Construct_Params
	{	};

	/**
	 * Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ChangeFocusButton
	 */
	struct URankingMenu_CategoryButtonList_C_ChangeFocusButton_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ExecuteUbergraph_RankingMenu_CategoryButtonList
	 */
	struct URankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GTLL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.OnClick__DelegateSignature
	 */
	struct URankingMenu_CategoryButtonList_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
