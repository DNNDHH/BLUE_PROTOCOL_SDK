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
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetSelectColor
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_SetSelectColor_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetTimeIcon
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_SetTimeIcon_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetNewIcon
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_SetNewIcon_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetText
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_SetText_Params
	{
	public:
		class FString                                              AreaNameText;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.ExecuteUbergraph_LibraryMenu_MonsterAreaListItem
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.OnSelect__DelegateSignature
	 */
	struct ULibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
