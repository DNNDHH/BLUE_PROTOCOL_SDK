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
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.SetMenuFocus
	 */
	struct URankingMenu_CategoryButton_C_SetMenuFocus_Params
	{
	public:
		bool                                                       InFocus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L043[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.PreConstruct
	 */
	struct URankingMenu_CategoryButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.Construct
	 */
	struct URankingMenu_CategoryButton_C_Construct_Params
	{	};

	/**
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct URankingMenu_CategoryButton_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.ExecuteUbergraph_RankingMenu_CategoryButton
	 */
	struct URankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.OnClick__DelegateSignature
	 */
	struct URankingMenu_CategoryButton_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
